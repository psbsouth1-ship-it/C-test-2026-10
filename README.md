# C-test-2026-10
for homework

## C++ 开发环境

本目录已经配好 VS Code 的 C++ 编译 / 运行 / 调试环境，打开文件夹即可直接使用。

### 环境信息

| 项目 | 值 |
| --- | --- |
| 编译器 | MinGW-w64 GCC 16.2.0 (posix-seh, UCRT) |
| g++ | `D:\Program Files\mingw64\bin\g++.exe` |
| gdb | `D:\Program Files\mingw64\bin\gdb.exe` |
| C++ 标准 | C++17 |
| 依赖扩展 | `ms-vscode.cpptools`（C/C++）、`ms-vscode.cpptools-extension-pack` |

### 使用方法

1. 用 VS Code 打开本文件夹（`文件 > 打开文件夹`）。
2. 新建或打开一个 `.cpp` 文件。
3. 编译运行，任选一种方式：
   - 按 <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>B</kbd> 编译，生成同名 `.exe`；
   - 按 <kbd>Ctrl</kbd>+<kbd>F5</kbd> 直接编译并运行；
   - 按 <kbd>F5</kbd> 编译并启动 gdb 调试（可下断点、单步、看变量）。

### 文件说明

- [.vscode/tasks.json](.vscode/tasks.json)：编译任务，带 `-Wall -Wextra -g` 和 UTF-8 参数，配合 `$gcc` 问题匹配器，报错会直接标在编辑器里。
- [.vscode/launch.json](.vscode/launch.json)：gdb 调试配置。
- [.vscode/settings.json](.vscode/settings.json)：编译器路径、C++17、UTF-8 源码、隐藏生成文件等默认设置。
- [.vscode/c_cpp_properties.json](.vscode/c_cpp_properties.json)：IntelliSense 头文件路径与宏定义。
- [hello.cpp](hello.cpp)：自检示例，能正常输出中文并读取输入就说明环境可用。

### 中文与编码说明

Windows 控制台默认代码页是 GBK(936)，而源码按 UTF-8 保存，所以编译时固定加了
`-finput-charset=UTF-8 -fexec-charset=UTF-8`，避免中文字符串乱码。
源文件请统一保存为 UTF-8（`settings.json` 已把默认编码设为 `utf8`）。

### 常见问题

- **提示找不到 g++**：配置里用的是绝对路径，不依赖系统 PATH；若 GCC 换了安装位置，改 `.vscode` 下四个 JSON 里的路径即可。
- **调试时断点打不上**：确认存在 `debug` 版 `exe`（先编译一次），`F5` 会自动先执行编译任务。
- **运行 exe 报缺少 DLL**：编译时已加 `-static-libgcc -static-libstdc++` 静态链接运行库，正常情况下不依赖 MinGW 的 DLL。

