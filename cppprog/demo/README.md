##怎样编译链接示例程序?

首先，这个文档时用`Markdown`语法写成的。为了获得最佳浏览效果，请在`VS Code`中安装`Markdown Preview Enhanced`插件。
安装好后，你的Code右上角会多一个.md文档的预览图标。点击这个图标，Code的编辑器窗口会分成两栏，左边是.md源码，右边是预览。

其次，你最好打开`VS Code`，并“远程”连接到`WSL`中的`Linux`，打开目录`cppprog`。
然后，按照如下指令完成。

<font color='brick' size='2'>注：如果你是在虚拟机中的`Linux`下操作，那么无需远程连接，直接在Code中打开`cprog`目录即可。</font>

#### 单源文件
例如，你要建造`demo/ch3/calculator.cpp`
1. 在Code中打开这个源程序，阅读代码
2. 按CTRL+`打开终端
3. 依次输入如下命令：
```
cd demo/ch3
g++ -g -Wall -fsanitize=address calculator.cpp
./a.out
```

#### 多源文件
例如，你要建造`demo/ch3/case`
1. 在Code中打开case目录下的所有源程序，阅读代码
2. 按CTRL+`打开终端
3. 依次输入如下命令：
```
make -f ../../llist.mk
./a.out
```

##如果我在`Windows`下该怎么做？

首先，推荐安装适用于`Windows`的GCC工具集`MinGW`，包括`gcc`、`g++`编译器和`make`工具。
其次，启动Code后，无需连接，直接打开目录。
以后的操作可以参照Linux环境下的指令执行。

<font color='brick' size='2'>注：
1. 如果你的开发环境是`Visual Studio`，那么可以直接在IDE中完成编译链接。
2. 如果是多源文件，那么你需要先创建一个解决方案，然后将已经存在的源文件加入到这个解决方案中。
3. MinGW的`make`工具的可执行代码是`mingw32-make`。你可以这么做：找到MinGW的`bin`目录，将其下的`mingw32-make.exe`复制一份，并重命名为`make.exe`，这样就可以获得与Linux环境一致的命令。
</font>

##如果我在`MacOS`下该怎么做？

首先，推荐安装适用于`MacOS`的`gcc`、`g++`编译器和`make`工具，以及`VS Code`。
其次，启动Code后，无需连接，直接打开目录。
以后的操作可以参照Linux环境下的指令执行。