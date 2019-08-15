## :page_with_curl: The Link 

### 2019.09
1. [隐私保护和收集方案](https://github.com/No-Github/Digital-Privacy)
2. [外挂入门指南](https://github.com/CasterWx/Plug-in-R)
3. [鱼塘热榜项目](https://github.com/timeromantic/TopList/)


### 2019.08
1. [go语言学习电子书](https://github.com/Unknwon/the-way-to-go_ZH_CN/blob/master/eBook/preface.md) 
2. [boost::variant](https://blog.csdn.net/lanchunhui/article/details/50532772)  
3. [rpc原理学习](https://blog.csdn.net/zhougb3/article/details/80403125)   
4. [海盗湾](https://www.jianshu.com/p/db245f3b4071)  
5. [macbook状态栏的显示](https://getbitbar.com/)
6. [我怎么成为物理学家的](https://www.edge.org/conversation/murray_gell_mann-the-making-of-a-physicist)
7. [老照片的故事](https://thatsideofthefamily.wordpress.com/2016/04/17/the-spectacle-and-the-mystery-new-york-1932/)  
8. [热爱passion是什么](https://debugandrelease.blogspot.com/2019/04/what-am-i-passionate-about.html)  
9. [mongodb模式设计六大原则](https://www.mongodb.com/blog/post/6-rules-of-thumb-for-mongodb-schema-design-part-1)   [翻译文档](https://blog.csdn.net/BloodyMandoo/article/details/78457775)
10. [中文播客推荐](https://typlog.com/podlist/)
11. [如何编写幂等的bash脚本](https://arslan.io/2019/07/03/how-to-write-idempotent-bash-scripts/)
12. [中国互联网报告2019](https://www.scmp.com/china-internet-report)
13. [apoll登月计划对科技进步的影响](https://www.fastcompany.com/90362753/how-nasa-gave-birth-to-modern-computing-and-gets-no-credit-for-it)
14. [可编程的桌面自动化工具](https://github.com/oakwoodai/automagica)
15. [为什么学习go](https://medium.com/@leoneperdigao/why-it-is-worth-learning-golang-3a686e4448cf)
16. [并发和多线程优秀博文](https://www.logicbig.com/quick-info/programming/multi-threading.html?source=post_page---------------------------)
17. [markdown语法](https://guides.github.com/features/mastering-markdown/)
18. [gocui go语言的终端图形化 学习范例](https://github.com/jroimartin/gocui)
19. [我不想和你谈论](https://www.douban.com/note/235592900/)    --张悬的歌《我不想和你谈论》  来自诗人吴晟的词
20. [cgi脚本简介](http://rickcarlino.com/2019/07/20/what-were-cgi-scripts-html.html)
21. [hub-github iterm](https://hub.github.com/)
22. [JetBrains IDE shortcut](https://nextfe.com/jetbrains-ide-shortcuts/)
23. [linux 界面系统安装软件](https://github.com/panhaoneo/autosetup)
24. [140种植物插画作品](https://www.c82.net/twining/plants/)


## :tv:学习推荐
1. 自己写一个博客项目： go做后端 JQuery+Bootstarp 前端 Mysql+Redis 数据库  参考：[printf&520](https://www.printf520.com/about.html)
   资源：[build-web-application-with-golang](https://github.com/astaxie/build-web-application-with-golang)
2. mysql 《MySQL技术内幕：SQL编程》 《高性能MySQL》《MySQL技术内幕》
 
## :cloud:灵感问题
- [ ] 【封装sql driver】mysql为什么一个db一个对象一个链接，mongodb也需要这样吗？
- [ ]  Goroutines，thread， coroutines 概念了解

## :post_office:专业知识解答

1. 并发与并行的解释： Concurrency is about simultaneity, that is, dealing with many things at once. Parallelism is about doing many things at once. 

Concurrency vs Parallelism
Parallelism is running multiple threads in separate cores or processors so that context switching can be avoided. Also there's no communication between threads or no data is shared between the threads. Threads perform several computations independently. This requires hardware with multiple processors or core.

Concurrency is running multiple threads which share some data (or interfere: overlap their executions on some code). These threads cannot safely run without proper communication (synchronization). Sometimes it is referred as running multiple threads in a single core but that's not entirely accurate. The threads can run in multiple cores but they have to do proper synchronization between each other to achieve the goals.

![图片解释](https://miro.medium.com/max/610/0*mx9CAltUS1vD_Ezs.png)
