# newlib-llvm

> ⚠️ **Work in progress.** This is part of the experimental LLVM-based PS2 toolchain. It changes often, has gaps, and is not ready for production use. ⚠️

Fork of the PS2 newlib (`ee-v4.6.0`) used by the LLVM-based toolchain in [ps2/llvm-toolchain](https://git.techwritescode.dev/ps2/llvm-toolchain). The `ee-v4.6.0-llvm` branch carries the `ee-v4.6.0` sources plus a few small commits that the clang build needs, such as the POSIX threads profile and the errno codes. The upstream README for the GNU tree is in `README`.
