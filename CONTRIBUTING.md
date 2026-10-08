# Contributing to imgui-android

Thank you for your interest in contributing to `imgui-android`!

---

## How to Contribute

1. **Fork the Repository**:
   Fork the repository to your own GitHub account and create a feature branch:
   ```bash
   git checkout -b feature/my-improvement
   ```

2. **Test Your Changes**:
   Ensure your code compiles cleanly without warnings or errors using the standalone build script on an ARM64 environment (e.g. Termux or Linux aarch64):
   ```bash
   bash build.sh
   ```
   Verify that `dist/libimgui-moulberry90-java64.so` and `dist/libc++_flashtoch.so` are built properly.

3. **Keep It Clean**:
   - Maintain 100% symbol parity with the JNI bindings.
   - Do not add desktop glibc dependencies.
   - Avoid unnecessary complexity or external tooling dependencies.

4. **Submit a Pull Request**:
   - Push your branch to your fork and submit a Pull Request against `main`.
   - Provide a clear description of the problem solved or feature added.

---

## Questions & Bug Reports

For questions or bugs, please open a [GitHub Issue](https://github.com/git-drs/imgui-android/issues).
