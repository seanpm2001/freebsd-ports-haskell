--- dependencies/zycore/include/Zycore/Defines.h.orig	2022-09-29 22:15:50 UTC
+++ dependencies/zycore/include/Zycore/Defines.h
@@ -131,6 +131,12 @@
 #   define ZYAN_AARCH64
 #elif defined(_M_ARM) || defined(_M_ARMT) || defined(__arm__) || defined(__thumb__)
 #   define ZYAN_ARM
+#elif defined(__powerpc64__)
+#   define ZYAN_PPC64
+#elif defined(__powerpc__)
+#   define ZYAN_PPC
+#elif defined(__riscv) && __riscv_xlen == 64
+#   define ZYAN_RISCV64
 #elif defined(__EMSCRIPTEN__)
     // Nothing to do, `ZYAN_EMSCRIPTEN` is both platform and arch macro for this one.
 #else
