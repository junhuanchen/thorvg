meson setup build_riscv \
  --cross-file cross-riscv.txt \
  --buildtype=release \
  --default-library=static \
  -Dexamples=false \
  -Dtools= \
  -Dtests=false \
  -Dloaders="lottie,svg" \
  -Dbindings="capi" \
  -Dengines="sw" \
  -Dthreads=false \
  -Dextra=""

meson setup build_riscv \
  --cross-file cross-riscv.txt \
  --buildtype=release \
  --default-library=static \
  -Dexamples=false \
  -Dtools= \
  -Dtests=false \
  -Dloaders="lottie" \
  -Dbindings="capi" \
  -Dengines="sw" \
  -Dthreads=false

ninja -C build_riscv


DESTDIR=./ ninja -C build_riscv install   # 默认装到 --prefix 指定目录
