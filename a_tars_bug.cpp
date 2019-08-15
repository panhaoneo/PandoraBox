#include <iostream>
#include "servant/Communicator.h"
#include "FactorCalc.h"

using namespace::BEC;
using namespace::NFQUOTE;


class Test
{
public:
    void init();

    NFQUOTE::FactorCalcPrx _FactorCalcPrx;
};

void Test::init()
{
    TC_Config config;
    config.parseFile("client.conf");

    Communicator comm;
    comm.stringToProxy(config["/conf/obj<FactorCalcPrx>"], _FactorCalcPrx);
}

int main(int argc, char** argv)
{
    FactorHisCalcReq req;
    FactorHisCalcRsp rsp;

    req.sFormulaName = argv[1];
    req.stKLineReq.sDtSecCode = argv[2];
    req.stKLineReq.eKLineType = E_KLT_DAY;
    req.stKLineReq.iMulnum = 0;
    req.stKLineReq.iStartxh = 0;
    req.stKLineReq.iWantnum = 100;
    req.stKLineReq.bTg = true;       //使用前复权数据计算

    Test *p = new Test();
    p->init();
    p->_FactorCalcPrx->calcFactorHisCalc(req,rsp);

    rsp.display(cout);
}
