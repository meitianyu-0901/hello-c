# hello-c

我的第一个 C 项目，跟随阶段 0 日任务练手（2026 年 10 月，大二上）。

## 文件说明

- `first.c`：输出 Hello, world，第一个能编译运行的程序。
- `debug.c`：调试练习，for 循环把 1 到 5 累加，每轮打印 i 与 sum。
- `.vscode/launch.json`：VS Code 调试配置，F5 靠它启动 gdb。
- `.gitignore`：屏蔽 `*.o` 与 `*.exe`，编译产物不进仓库。

## 编译与运行

    gcc first.c -o first.exe
    ./first.exe

调试版必须带 -g，否则断点位置对不上：

    gcc -g debug.c -o debug.exe

## 目录约定

`D:\code` 下每个练习一个子目录，源码、配置、README 都放子目录里。

## 环境

Windows 11 + GCC 15.2.0（MSYS2，`D:\msys64\mingw64\bin`）+ VS Code + git
