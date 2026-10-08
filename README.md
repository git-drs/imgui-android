# imgui-android

**Native Android ARM64 (`aarch64`) port of [Dear ImGui](https://github.com/ocornut/imgui) and [imgui-java](https://github.com/SpaiR/imgui-java)**

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Platform: Android ARM64](https://img.shields.io/badge/Platform-Android%20ARM64-brightgreen.svg)]()
[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/wild_drs)

---

## Overview

**`imgui-android`** is a standalone, native C++ ARM64 (`aarch64`) port of [Dear ImGui](https://github.com/ocornut/imgui) (Docking branch) and [imgui-java](https://github.com/SpaiR/imgui-java) JNI bindings, compiled directly for Android devices and mobile runtimes.

While upstream desktop builds target Windows, macOS, and desktop Linux glibc x86_64 environments, this project provides a dedicated Android Bionic build pipeline that compiles native shared libraries (`.so`) ready to be deployed on Android ARM64 environments with zero desktop glibc dependencies.

---

## Features

- **Native Android Bionic ARM64**:
  Compiled with Clang targeting the `aarch64` Android ABI against standard Android system libraries (`libc.so`, `libm.so`, `libdl.so`), eliminating desktop glibc (`libc.so.6`, `libstdc++.so.6`) missing library errors.
- **Linker Collision-Free C++ Runtime**:
  Uses an isolated C++ standard library runtime (`libc++_flashtoch.so`) configured with an embedded `$ORIGIN` RPATH. This prevents ABI collisions with Android system graphics drivers and custom OpenGL ES / Vulkan translation layers.
- **Full Extension Suite Included**:
  - **Dear ImGui Core** (Docking branch): Windows, docking layout, inputs, widgets, tables, and draw lists.
  - **ImPlot**: High-performance plotting and 2D graph engine.
  - **ImNodes**: Node-based visual graph editor.
  - **ImGuizmo**: 3D transform gizmos (translate, rotate, scale).
  - **ImGui Knobs & Memory Editor**: Specialized dials and memory inspection widgets.
- **Pure Layout & Math Engine**:
  No direct coupling to desktop GLFW or desktop OpenGL drivers in the native binary. Vertex data, draw commands, and input states are processed natively and passed cleanly to the host application.
- **Ultra-Fast Standalone Build**:
  A single, self-contained build script (`build.sh`) compiles all 150 C++ source files natively in Termux or an Android NDK environment in seconds.

---

## Deliverables

The build produces two shared libraries in `dist/`:

| File | Architecture | Description |
| :--- | :--- | :--- |
| **`libimgui-moulberry90-java64.so`** | ARM64 (`aarch64`) | The main Dear ImGui engine with all JNI endpoints and extension modules. |
| **`libc++_flashtoch.so`** | ARM64 (`aarch64`) | Isolated C++ standard library runtime patched to avoid driver collisions. |

---

## How to Build

### Prerequisites

You can build directly on an Android device using **Termux** or on any Linux ARM64 system:

```bash
pkg update
pkg install clang openjdk-21 patchelf
```

### Building

```bash
git clone https://github.com/git-drs/imgui-android.git
cd imgui-android
bash build.sh
```

Compiled binaries will be output directly into the `dist/` directory.

---

## Usage in Android / Java Projects

To load the libraries in your Android Java application or wrapper:

```java
// Load the isolated C++ runtime first, then the ImGui native library
System.loadLibrary("c++_flashtoch");
System.loadLibrary("imgui-moulberry90-java64");
```

---

## Project Structure

```
imgui-android/
├── build.sh         # Fast ARM64 Clang build script
├── dist/            # Compiled ARM64 .so deliverables
│   ├── libimgui-moulberry90-java64.so
│   └── libc++_flashtoch.so
├── src/             # Dear ImGui core, extensions, and JNI bindings (150 files)
│   ├── imgui.cpp, imgui_draw.cpp, imgui_widgets.cpp, imgui_tables.cpp
│   ├── implot.cpp, imnodes.cpp, imgui_node_editor.cpp
│   └── jni_*.cpp, imgui_*.cpp (JNI wrapper implementations)
├── LICENSE          # MIT & Apache 2.0 license terms
└── README.md        # Project documentation
```

---

## Support & Donations

If you find this project helpful and want to support its ongoing development and maintenance:

[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/wild_drs)

---

## Licenses & Attribution

- **Dear ImGui**: Created by Omar Cornut ([ocornut/imgui](https://github.com/ocornut/imgui)) — [MIT License](LICENSE).
- **imgui-java**: JNI bindings created by SpaiR ([SpaiR/imgui-java](https://github.com/SpaiR/imgui-java)) — [Apache License 2.0](LICENSE).
- **Android Port & Build Tooling**: [git-drs](https://github.com/git-drs/imgui-android).
