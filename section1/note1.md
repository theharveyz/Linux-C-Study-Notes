###前提：
    C语言的学习要尤其注意所在平台，以及编译工具的不同！

###调试工具集：
- gdb
- make

###手册
- man手册
    + 查询方法：man [章节] [NAME] 
    + 注意所在的库

###可执行文件生成步骤
源代码 -> 预处理 -> 编译 -> 汇编 -> 链接 -> 可执行文件

1. gcc编译步骤
```SHELL
$> #gcc hello.c -Wall 打印出程序所有的警告
$> gcc -E hello.c > hello.i  //生成预编译文件
$> gcc -S hello.i  //编译成汇编
$> gcc -c hello.s  //编译成二进制文件
$> gcc hello.s -o hello //建立链接
```
当然以上可以直接使用：`gcc hello.c -o hello`进行处理！

2. 使用make进行编译
```
$> make hello
cc     hello.c   -o hello 
```

TIPS：
- 程序中#开头的部分，在预处理阶段进行预处理
- make命令会针对输入的hello 找到 hello.c文件
- cc为编译工具
- 代码要求：防止写越界、防止内存泄露、谁打开谁关闭、谁申请谁释放
- 如上hello.c 例子中，main 函数如果没有return 0 或者exit(0)；则返回值为printf的返回值！
-  

 
