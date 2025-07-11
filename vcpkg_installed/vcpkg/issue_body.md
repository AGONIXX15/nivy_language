Package: gtk:x64-linux@4.16.3#3

**Host Environment**

- Host: x64-linux
- Compiler: Clang 14.0.0
-    vcpkg-tool version: 2025-06-20-ef7c0d541124bbdd334a03467e7edb6c3364d199
    vcpkg-scripts version: efcfaaf60d 2025-07-10 (15 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Found Python version '3.10.12 at /usr/bin/python3'
-- Using meson: /home/marcel/Documents/external/vcpkg/downloads/tools/meson-1.8.2-3d2461/meson.py
-- Note: gtk only supports dynamic library linkage. Building dynamic library.
-- Using cached GNOME-gtk-4.16.3.tar.gz
-- Cleaning sources at /home/marcel/Documents/external/vcpkg/buildtrees/gtk/src/4.16.3-43597d369f.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source /home/marcel/Documents/external/vcpkg/downloads/GNOME-gtk-4.16.3.tar.gz
-- Applying patch 0001-build.patch
-- Applying patch fix_vulkan_enabled.patch
-- Using source at /home/marcel/Documents/external/vcpkg/buildtrees/gtk/src/4.16.3-43597d369f.clean
-- Configuring x64-linux-dbg
-- Getting CMake variables for x64-linux
-- Loading CMake variables from /home/marcel/Documents/external/vcpkg/buildtrees/gtk/cmake-get-vars_C_CXX-x64-linux.cmake.log
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: /usr/bin/python3 -I /home/marcel/Documents/external/vcpkg/downloads/tools/meson-1.8.2-3d2461/meson.py setup -Dwayland-backend=false -Dx11-backend=true -Dbroadway-backend=false -Dwin32-backend=false -Dmacos-backend=false -Dbuild-demos=false -Dbuild-testsuite=false -Dbuild-examples=false -Dbuild-tests=false -Ddocumentation=false -Dman-pages=false -Dmedia-gstreamer=disabled -Dprint-cups=disabled -Dvulkan=disabled -Dcloudproviders=disabled -Dsysprof=disabled -Dtracker=disabled -Dcolord=disabled -Df16c=disabled -Dintrospection=disabled --backend ninja --wrap-mode nodownload -Doptimization=plain --native /home/marcel/Documents/external/vcpkg/buildtrees/gtk/meson-x64-linux-dbg.log --libdir lib --pkgconfig.relocatable -Ddebug=true --prefix /home/marcel/Documents/external/vcpkg/packages/gtk_x64-linux/debug --includedir ../include --pkg-config-path ['/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig','/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig'] -Dcmake_prefix_path=['/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug','/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux'] /home/marcel/Documents/external/vcpkg/buildtrees/gtk/src/4.16.3-43597d369f.clean
    Working Directory: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg
    Error code: 1
    See logs for more information:
      /home/marcel/Documents/external/vcpkg/buildtrees/gtk/config-x64-linux-dbg-meson-log.txt.log
      /home/marcel/Documents/external/vcpkg/buildtrees/gtk/config-x64-linux-dbg-out.log

Call Stack (most recent call first):
  /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/vcpkg-tool-meson/vcpkg_configure_meson.cmake:468 (vcpkg_execute_required_process)
  ports/gtk/portfile.cmake:46 (vcpkg_configure_meson)
  scripts/ports.cmake:206 (include)



```

<details><summary>/home/marcel/Documents/external/vcpkg/buildtrees/gtk/config-x64-linux-dbg-out.log</summary>

```
The Meson build system
Version: 1.8.2
Source dir: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/src/4.16.3-43597d369f.clean
Build dir: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg
Build type: native build
Project name: gtk
Project version: 4.16.3
C compiler for the host machine: /usr/bin/cc -fPIC -g (gcc 11.4.0 "cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0")
C linker for the host machine: /usr/bin/cc -fPIC -g ld.bfd 2.38
Host machine cpu family: x86_64
Host machine cpu: x86_64
Has header "crt/externs.h" : NO 
Has header "dev/evdev/input.h" : NO 
Has header "dlfcn.h" : YES 
Has header "ftw.h" : YES 
Has header "inttypes.h" : YES 
Has header "linux/input.h" : YES 
Has header "linux/memfd.h" : YES 
Has header "locale.h" : YES 
Has header "memory.h" : YES 
Has header "stdint.h" : YES 
Has header "stdlib.h" : YES 
Has header "string.h" : YES 
Has header "strings.h" : YES 
Has header "sys/mman.h" : YES 
Has header "sys/param.h" : YES 
Has header "sys/stat.h" : YES 
Has header "sys/sysinfo.h" : YES 
Has header "sys/sysmacros.h" : YES 
Has header "sys/systeminfo.h" : NO 
Has header "sys/time.h" : YES 
Has header "sys/types.h" : YES 
Has header "unistd.h" : YES 
Library m found: YES
Checking for function "getpagesize" with dependency -lm: YES 
Checking for function "getresuid" with dependency -lm: YES 
Checking for function "madvise" with dependency -lm: YES 
Checking for function "memfd_create" with dependency -lm: YES 
Checking for function "mkostemp" with dependency -lm: YES 
Checking for function "mlock" with dependency -lm: YES 
Checking for function "mmap" with dependency -lm: YES 
Checking for function "posix_fallocate" with dependency -lm: YES 
Checking for function "sincos" with dependency -lm: YES 
Checking for function "sincosf" with dependency -lm: YES 
Checking for function "memmem" with dependency -lm: YES 
Checking if "sigsetjmp" links: YES 
Checking if "__uint128_t available" compiles: YES 
Compiler for C supports arguments -fno-strict-aliasing: YES 
Compiler for C supports arguments -Wno-c++11-extensions: NO 
Compiler for C supports arguments -Wno-missing-include-dirs: YES 
Compiler for C supports arguments -Wno-typedef-redefinition: NO 
Compiler for C supports arguments -Wno-tautological-constant-out-of-range-compare: NO 
Compiler for C supports arguments -Wduplicated-branches: YES 
Compiler for C supports arguments -Wduplicated-cond: YES 
Compiler for C supports arguments -Wformat=2: YES 
Compiler for C supports arguments -Wformat-nonliteral: YES 
Compiler for C supports arguments -Wformat-security: YES 
Compiler for C supports arguments -Wignored-qualifiers: YES 
Compiler for C supports arguments -Wimplicit-function-declaration: YES 
Compiler for C supports arguments -Wlogical-op: YES 
Compiler for C supports arguments -Wmisleading-indentation: YES 
Compiler for C supports arguments -Wmissing-format-attribute: YES 
Compiler for C supports arguments -Wmissing-include-dirs: YES 
Compiler for C supports arguments -Wmissing-noreturn: YES 
Compiler for C supports arguments -Wnested-externs: YES 
Compiler for C supports arguments -Wold-style-definition: YES 
Compiler for C supports arguments -Wpointer-arith: YES 
Compiler for C supports arguments -Wshadow: YES 
Compiler for C supports arguments -Wstrict-prototypes: YES 
Compiler for C supports arguments -Wswitch-default: YES 
Compiler for C supports arguments -Wswitch-enum: YES 
Compiler for C supports arguments -Wundef: YES 
Compiler for C supports arguments -Wuninitialized: YES 
Compiler for C supports arguments -Wunused: YES 
Compiler for C supports arguments -Werror=address: YES 
Compiler for C supports arguments -Werror=array-bounds: YES 
Compiler for C supports arguments -Werror=empty-body: YES 
Compiler for C supports arguments -Werror=enum-int-mismatch: NO 
Compiler for C supports arguments -Werror=implicit: YES 
Compiler for C supports arguments -Werror=implicit-fallthrough: YES 
Compiler for C supports arguments -Werror=implicit-fallthrough=5: YES 
Compiler for C supports arguments -Werror=init-self: YES 
Compiler for C supports arguments -Werror=int-to-pointer-cast: YES 
Compiler for C supports arguments -Werror=main: YES 
Compiler for C supports arguments -Werror=missing-braces: YES 
Compiler for C supports arguments -Werror=missing-declarations: YES 
Compiler for C supports arguments -Werror=missing-prototypes: YES 
Compiler for C supports arguments -Werror=nonnull: YES 
Compiler for C supports arguments -Werror=override-init: YES 
Compiler for C supports arguments -Werror=pointer-to-int-cast: YES 
Compiler for C supports arguments -Werror=redundant-decls: YES 
Compiler for C supports arguments -Werror=return-type: YES 
Compiler for C supports arguments -Werror=sequence-point: YES 
Compiler for C supports arguments -Werror=trigraphs: YES 
Compiler for C supports arguments -Werror=vla: YES 
Compiler for C supports arguments -Werror=write-strings: YES 
Compiler for C supports arguments -Wcast-align: YES 
Compiler for C supports arguments -Wnull-dereference: YES 
Compiler for C supports arguments -fvisibility=hidden: YES 
Compiler for C supports link arguments -Wl,-Bsymbolic: YES 
Compiler for C supports link arguments -Wl,-z,relro: YES 
Compiler for C supports link arguments -Wl,-z,now: YES 
Found pkg-config: YES (/bin/pkg-config) 0.29.2
Run-time dependency glib-2.0 found: YES 2.84.2
Run-time dependency gobject-2.0 found: YES 2.84.2
Run-time dependency gio-unix-2.0 found: YES 2.84.2
Run-time dependency gmodule-2.0 found: YES 2.84.2
Run-time dependency cairo found: YES 1.18.4
Run-time dependency cairo-gobject found: YES 1.18.4
Run-time dependency pango found: YES 1.56.1
Run-time dependency fribidi found: YES 1.0.16
Run-time dependency harfbuzz found: YES 11.2.0
Run-time dependency harfbuzz-subset found: YES 11.2.0
Run-time dependency pangoft2 found: YES 1.56.1
Run-time dependency pangocairo found: YES 1.56.1
Run-time dependency gdk-pixbuf-2.0 found: YES 2.42.12
Run-time dependency libpng found: YES 1.6.48
Run-time dependency libtiff-4 found: YES 4.7.0
Run-time dependency libjpeg found: YES 3.1.0
Run-time dependency epoxy found: YES 1.5.10
Run-time dependency xkbcommon found: YES 1.4.0
Run-time dependency graphene-gobject-1.0 found: YES 1.10.8
Run-time dependency iso-codes found: YES 4.9.0
Found CMake: /home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake (3.30.1)
Run-time dependency gobject-introspection-1.0 found: NO (tried pkgconfig and cmake)
Dependency gstreamer-player-1.0 skipped: feature media-gstreamer disabled
Dependency gstreamer-gl-1.0 skipped: feature media-gstreamer disabled
Dependency gstreamer-allocators-1.0 skipped: feature media-gstreamer disabled
Dependency tracker-sparql-3.0 skipped: feature tracker disabled
Dependency colord skipped: feature colord disabled
Run-time dependency cairo-xlib found: YES 1.18.4
Run-time dependency cairo-script-interpreter found: YES 1.18.4
Run-time dependency xrandr found: YES 1.5.2
Dependency xrandr found: YES 1.5.2 (cached)
Run-time dependency x11 found: YES 1.7.5
Run-time dependency xrender found: YES 0.9.10
Run-time dependency xi found: YES 1.8
Run-time dependency xext found: YES 1.3.4
Run-time dependency xcursor found: YES 1.2.0
Run-time dependency xdamage found: NO (tried pkgconfig and cmake)

../src/4.16.3-43597d369f.clean/meson.build:527:19: ERROR: Dependency "xdamage" not found, tried pkgconfig and cmake

A full log can be found at /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-logs/meson-log.txt
```
</details>

<details><summary>/home/marcel/Documents/external/vcpkg/buildtrees/gtk/config-x64-linux-dbg-meson-log.txt.log</summary>

```
Build started at 2025-07-11T19:15:32.866667
Main binary: /usr/bin/python3
Build Options: -Dwayland-backend=false -Dx11-backend=true -Dbroadway-backend=false -Dwin32-backend=false -Dmacos-backend=false -Dbuild-demos=false -Dbuild-testsuite=false -Dbuild-examples=false -Dbuild-tests=false -Ddocumentation=false -Dman-pages=false -Dmedia-gstreamer=disabled -Dprint-cups=disabled -Dvulkan=disabled -Dcloudproviders=disabled -Dsysprof=disabled -Dtracker=disabled -Dcolord=disabled -Df16c=disabled -Dintrospection=disabled -Doptimization=plain -Ddebug=true '-Dcmake_prefix_path=['"'"'/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug'"'"','"'"'/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux'"'"']' -Dprefix=/home/marcel/Documents/external/vcpkg/packages/gtk_x64-linux/debug -Dincludedir=../include -Dlibdir=lib -Dbackend=ninja -Dwrap_mode=nodownload -Dpkgconfig.relocatable=True '-Dpkg_config_path=['"'"'/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig'"'"','"'"'/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig'"'"']' --native-file=/home/marcel/Documents/external/vcpkg/buildtrees/gtk/meson-x64-linux-dbg.log
Python system: Linux
The Meson build system
Version: 1.8.2
Source dir: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/src/4.16.3-43597d369f.clean
Build dir: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg
Build type: native build
Project name: gtk
Project version: 4.16.3
-----------
Detecting compiler via: `/usr/bin/cc -fPIC -g --version` -> 0
stdout:
cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
-----------
Running command: -cpp -x c -E -dM -
-----
-----------
Detecting linker via: `/usr/bin/cc -fPIC -g -Wl,--version -L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib` -> 0
stdout:
GNU ld (GNU Binutils for Ubuntu) 2.38
Copyright (C) 2022 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or (at your option) a later version.
This program has absolutely no warranty.
-----------
stderr:
collect2 version 11.4.0
/usr/bin/ld -plugin /usr/lib/gcc/x86_64-linux-gnu/11/liblto_plugin.so -plugin-opt=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper -plugin-opt=-fresolution=/tmp/ccpDCKBf.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/11/crtbeginS.o -L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib -L/usr/lib/gcc/x86_64-linux-gnu/11 -L/usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/11/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/11/../../.. --version -lgcc --push-state --as-needed -lgcc_s --pop-state -lc -lgcc --push-state --as-needed -lgcc_s --pop-state /usr/lib/gcc/x86_64-linux-gnu/11/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/crtn.o
-----------
Sanity testing C compiler: /usr/bin/cc -fPIC -g
Is cross compiler: False.
Sanity check compiler command line: /usr/bin/cc -fPIC -g sanitycheckc.c -o sanitycheckc.exe -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include -D_FILE_OFFSET_BITS=64 -L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib
Sanity check compile stdout:

-----
Sanity check compile stderr:

-----
Running test binary command:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/sanitycheckc.exe
C compiler for the host machine: /usr/bin/cc -fPIC -g (gcc 11.4.0 "cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0")
C linker for the host machine: /usr/bin/cc -fPIC -g ld.bfd 2.38
-----------
Detecting archiver via: `/usr/bin/ar --version` -> 0
stdout:
GNU ar (GNU Binutils for Ubuntu) 2.38
Copyright (C) 2022 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or (at your option) any later version.
This program has absolutely no warranty.
-----------
-----------
Detecting compiler via: `/usr/bin/cc -fPIC -g --version` -> 0
stdout:
cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
-----------
Running command: -cpp -x c -E -dM -
-----
-----------
Detecting linker via: `/usr/bin/cc -fPIC -g -Wl,--version -L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib` -> 0
stdout:
GNU ld (GNU Binutils for Ubuntu) 2.38
Copyright (C) 2022 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or (at your option) a later version.
This program has absolutely no warranty.
-----------
stderr:
collect2 version 11.4.0
/usr/bin/ld -plugin /usr/lib/gcc/x86_64-linux-gnu/11/liblto_plugin.so -plugin-opt=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper -plugin-opt=-fresolution=/tmp/cc2dCvAJ.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/11/crtbeginS.o -L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib -L/usr/lib/gcc/x86_64-linux-gnu/11 -L/usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/11/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/11/../../.. --version -lgcc --push-state --as-needed -lgcc_s --pop-state -lc -lgcc --push-state --as-needed -lgcc_s --pop-state /usr/lib/gcc/x86_64-linux-gnu/11/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/crtn.o
-----------
Sanity testing C compiler: /usr/bin/cc -fPIC -g
Is cross compiler: False.
Sanity check compiler command line: /usr/bin/cc -fPIC -g sanitycheckc.c -o sanitycheckc.exe -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include -D_FILE_OFFSET_BITS=64 -L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib
Sanity check compile stdout:

-----
Sanity check compile stderr:

-----
Running test binary command:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/sanitycheckc.exe
C compiler for the build machine: /usr/bin/cc -fPIC -g (gcc 11.4.0 "cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0")
C linker for the build machine: /usr/bin/cc -fPIC -g ld.bfd 2.38
-----------
Detecting archiver via: `/usr/bin/ar --version` -> 0
stdout:
GNU ar (GNU Binutils for Ubuntu) 2.38
Copyright (C) 2022 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or (at your option) any later version.
This program has absolutely no warranty.
-----------
Build machine cpu family: x86_64
Build machine cpu: x86_64
Host machine cpu family: x86_64
Host machine cpu: x86_64
Target machine cpu family: x86_64
Target machine cpu: x86_64
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpaa9vzb12
Code:

        #ifdef __has_include
         #if !__has_include("crt/externs.h")
          #error "Header 'crt/externs.h' could not be found"
         #endif
        #else
         #include <crt/externs.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpaa9vzb12/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 1
stderr:
/home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpaa9vzb12/testfile.c:4:12: error: #error "Header 'crt/externs.h' could not be found"
    4 |           #error "Header 'crt/externs.h' could not be found"
      |            ^~~~~
-----------
Has header "crt/externs.h" : NO 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpwq2pnfdr
Code:

        #ifdef __has_include
         #if !__has_include("dev/evdev/input.h")
          #error "Header 'dev/evdev/input.h' could not be found"
         #endif
        #else
         #include <dev/evdev/input.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpwq2pnfdr/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 1
stderr:
/home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpwq2pnfdr/testfile.c:4:12: error: #error "Header 'dev/evdev/input.h' could not be found"
    4 |           #error "Header 'dev/evdev/input.h' could not be found"
      |            ^~~~~
-----------
Has header "dev/evdev/input.h" : NO 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpg7viw5gz
Code:

        #ifdef __has_include
         #if !__has_include("dlfcn.h")
          #error "Header 'dlfcn.h' could not be found"
         #endif
        #else
         #include <dlfcn.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpg7viw5gz/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "dlfcn.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpb4dyobg6
Code:

        #ifdef __has_include
         #if !__has_include("ftw.h")
          #error "Header 'ftw.h' could not be found"
         #endif
        #else
         #include <ftw.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpb4dyobg6/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "ftw.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpclorglrh
Code:

        #ifdef __has_include
         #if !__has_include("inttypes.h")
          #error "Header 'inttypes.h' could not be found"
         #endif
        #else
         #include <inttypes.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpclorglrh/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "inttypes.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpfnlppph_
Code:

        #ifdef __has_include
         #if !__has_include("linux/input.h")
          #error "Header 'linux/input.h' could not be found"
         #endif
        #else
         #include <linux/input.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpfnlppph_/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "linux/input.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpp2xap8km
Code:

        #ifdef __has_include
         #if !__has_include("linux/memfd.h")
          #error "Header 'linux/memfd.h' could not be found"
         #endif
        #else
         #include <linux/memfd.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpp2xap8km/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "linux/memfd.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpe6pkss6x
Code:

        #ifdef __has_include
         #if !__has_include("locale.h")
          #error "Header 'locale.h' could not be found"
         #endif
        #else
         #include <locale.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpe6pkss6x/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "locale.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpa25kjspx
Code:

        #ifdef __has_include
         #if !__has_include("memory.h")
          #error "Header 'memory.h' could not be found"
         #endif
        #else
         #include <memory.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpa25kjspx/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "memory.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpkgr2_eoy
Code:

        #ifdef __has_include
         #if !__has_include("stdint.h")
          #error "Header 'stdint.h' could not be found"
         #endif
        #else
         #include <stdint.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpkgr2_eoy/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "stdint.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpm2z0awrw
Code:

        #ifdef __has_include
         #if !__has_include("stdlib.h")
          #error "Header 'stdlib.h' could not be found"
         #endif
        #else
         #include <stdlib.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpm2z0awrw/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "stdlib.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpkihd9lj6
Code:

        #ifdef __has_include
         #if !__has_include("string.h")
          #error "Header 'string.h' could not be found"
         #endif
        #else
         #include <string.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpkihd9lj6/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "string.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpo7fzxmyz
Code:

        #ifdef __has_include
         #if !__has_include("strings.h")
          #error "Header 'strings.h' could not be found"
         #endif
        #else
         #include <strings.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpo7fzxmyz/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "strings.h" : YES 
Running compile:
Working directory:  /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpg7es3lw0
Code:

        #ifdef __has_include
         #if !__has_include("sys/mman.h")
          #error "Header 'sys/mman.h' could not be found"
         #endif
        #else
         #include <sys/mman.h>
        #endif
-----------
Command line: `/usr/bin/cc -fPIC -g -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/include /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/tmpg7es3lw0/testfile.c -E -P -fPIC -g -D_FILE_OFFSET_BITS=64 -P -O0 -std=gnu99` -> 0
Has header "sys/mman.h" : YES 
Running compile:
...
Skipped 1322 lines
...
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs pangocairo` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lpangocairo-1.0 -lm -lpangoft2-1.0 -lm -lpango-1.0 -lm -lgio-2.0 -lgobject-2.0 -lffi -lgmodule-2.0 -pthread -lfribidi -lharfbuzz -pthread -lm -lstdc++ -lm -lglib-2.0 -latomic -lm -pthread -lpcre2-8 -lcairo -lm -ldl -lfontconfig -pthread -lexpat -lm -lfreetyped -lbz2d -lpng16d -lm -lz -lbrotlidec -lbrotlicommon -lm -lXext -lXrender -lX11 -lpixman-1 -lm -pthread
-----------
Run-time dependency pangocairo found: YES 1.56.1
Determining dependency 'gdk-pixbuf-2.0' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion gdk-pixbuf-2.0` -> 0
stdout:
2.42.12
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags gdk-pixbuf-2.0` -> 0
stdout:
-DLZMA_API_STATIC -pthread -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/gdk-pixbuf-2.0 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/libpng16 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/glib-2.0 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib/glib-2.0/include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs gdk-pixbuf-2.0` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lgdk_pixbuf-2.0 -lm -lpng16d -lm -ltiffd -lm -ljpeg -llzma -pthread -lgio-2.0 -lgobject-2.0 -lffi -lgmodule-2.0 -pthread -lglib-2.0 -latomic -lm -pthread -lpcre2-8 -lz
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs gdk-pixbuf-2.0` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lgdk_pixbuf-2.0 -lm -lpng16d -lm -ltiffd -lm -ljpeg -llzma -pthread -lgio-2.0 -lgobject-2.0 -lffi -lgmodule-2.0 -pthread -lglib-2.0 -latomic -lm -pthread -lpcre2-8 -lz
-----------
Run-time dependency gdk-pixbuf-2.0 found: YES 2.42.12
Determining dependency 'libpng' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion libpng` -> 0
stdout:
1.6.48
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags libpng` -> 0
stdout:
-I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/libpng16 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs libpng` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lpng16d -lm -lz
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs libpng` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lpng16d -lm -lz
-----------
Run-time dependency libpng found: YES 1.6.48
Determining dependency 'libtiff-4' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion libtiff-4` -> 0
stdout:
4.7.0
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags libtiff-4` -> 0
stdout:
-DLZMA_API_STATIC -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs libtiff-4` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -ltiffd -lm -lz -ljpeg -llzma -pthread
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs libtiff-4` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -ltiffd -lm -lz -ljpeg -llzma -pthread
-----------
Run-time dependency libtiff-4 found: YES 4.7.0
Determining dependency 'libjpeg' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion libjpeg` -> 0
stdout:
3.1.0
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags libjpeg` -> 0
stdout:
-I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs libjpeg` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -ljpeg
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs libjpeg` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -ljpeg
-----------
Run-time dependency libjpeg found: YES 3.1.0
Determining dependency 'epoxy' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion epoxy` -> 0
stdout:
1.5.10
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags epoxy` -> 0
stdout:
-I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs epoxy` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -L/usr/lib/x86_64-linux-gnu -lepoxy -ldl -lX11 -lGL -lEGL
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs epoxy` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lepoxy -ldl -lX11 -lGL -lEGL
-----------
Run-time dependency epoxy found: YES 1.5.10
Determining dependency 'xkbcommon' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xkbcommon` -> 0
stdout:
1.4.0
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags xkbcommon` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xkbcommon` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lxkbcommon
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xkbcommon` -> 0
stdout:
-lxkbcommon
-----------
Run-time dependency xkbcommon found: YES 1.4.0
Determining dependency 'graphene-gobject-1.0' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion graphene-gobject-1.0` -> 0
stdout:
1.10.8
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags graphene-gobject-1.0` -> 0
stdout:
-pthread -mfpmath=sse -msse -msse2 -pthread -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/graphene-1.0 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib/graphene-1.0/include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/glib-2.0 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib/glib-2.0/include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs graphene-gobject-1.0` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lgraphene-1.0 -lm -pthread -lgobject-2.0 -lglib-2.0 -latomic -lm -pthread -lpcre2-8 -lffi
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs graphene-gobject-1.0` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lgraphene-1.0 -lm -pthread -lgobject-2.0 -lglib-2.0 -latomic -lm -pthread -lpcre2-8 -lffi
-----------
Run-time dependency graphene-gobject-1.0 found: YES 1.10.8
Determining dependency 'iso-codes' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion iso-codes` -> 0
stdout:
4.9.0
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags iso-codes` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs iso-codes` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs iso-codes` -> 0
Run-time dependency iso-codes found: YES 4.9.0
Determining dependency 'gobject-introspection-1.0' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion gobject-introspection-1.0` -> 1
stderr:
Package gobject-introspection-1.0 was not found in the pkg-config search path.
Perhaps you should add the directory containing `gobject-introspection-1.0.pc'
to the PKG_CONFIG_PATH environment variable
No package 'gobject-introspection-1.0' found
-----------
CMake binary for host machine is not cached
CMake binary for host machine specified from cross file, native file, or env var as ['/home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake']
Found CMake: /home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake (3.30.1)
Extracting basic cmake information
CMake Toolchain: Calling CMake once to generate the compiler state
Calling CMake (['/home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake']) in /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/__CMake_compiler_info__ with:
  - "--trace-expand"
  - "--trace-format=json-v1"
  - "--no-warn-unused-cli"
  - "--trace-redirect=cmake_trace.txt"
  - "-G"
  - "Ninja"
  - "-DCMAKE_TOOLCHAIN_FILE=/home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/__CMake_compiler_info__/CMakeMesonTempToolchainFile.cmake"
  - "."
  - "-DCMAKE_PREFIX_PATH=/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug;/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux"
CMake trace warning: add_executable() non imported executables are not supported
CMake TRACE: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/__CMake_compiler_info__/CMakeFiles/CMakeScratch/TryCompile-SyHxTV/CMakeLists.txt:22 add_executable(['cmTC_dc273'])
CMake trace warning: target_link_libraries() TARGET cmTC_dc273 not found
CMake TRACE: /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/__CMake_compiler_info__/CMakeFiles/CMakeScratch/TryCompile-SyHxTV/CMakeLists.txt:28 target_link_libraries(['cmTC_dc273', ''])
Try CMake generator: auto
Calling CMake (['/home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake']) in /home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/cmake_gobject-introspection-1.0 with:
  - "--trace-expand"
  - "--trace-format=json-v1"
  - "--no-warn-unused-cli"
  - "--trace-redirect=cmake_trace.txt"
  - "-DCMAKE_TOOLCHAIN_FILE=/home/marcel/Documents/external/vcpkg/buildtrees/gtk/x64-linux-dbg/meson-private/cmake_gobject-introspection-1.0/CMakeMesonToolchainFile.cmake"
  - "."
  - "-DCMAKE_PREFIX_PATH=/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug;/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux"
  -- Module search paths:    ['/', '/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux', '/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug', '/home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64', '/opt', '/usr', '/usr/local']
  -- CMake root:             /home/marcel/Documents/external/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30
  -- CMake architectures:    ['aarch64-linux-gnu', 'i386-linux-gnu', 'x86_64-linux-gnu']
  -- CMake lib search paths: ['lib', 'lib32', 'lib64', 'libx32', 'share', '', 'lib/aarch64-linux-gnu', 'lib/i386-linux-gnu', 'lib/x86_64-linux-gnu']
Preliminary CMake check failed. Aborting.
Run-time dependency gobject-introspection-1.0 found: NO (tried pkgconfig and cmake)
Dependency gstreamer-player-1.0 skipped: feature media-gstreamer disabled
Dependency gstreamer-gl-1.0 skipped: feature media-gstreamer disabled
Dependency gstreamer-allocators-1.0 skipped: feature media-gstreamer disabled
Dependency tracker-sparql-3.0 skipped: feature tracker disabled
Dependency colord skipped: feature colord disabled
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --variable=prefix iso-codes` -> 0
stdout:
/usr
-----------
Got pkg-config variable prefix : /usr
Determining dependency 'cairo-xlib' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion cairo-xlib` -> 0
stdout:
1.18.4
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags cairo-xlib` -> 0
stdout:
-pthread -DXML_STATIC -pthread -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/cairo -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/libpng16 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/pixman-1
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs cairo-xlib` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -L/usr/lib/x86_64-linux-gnu -lcairo -lm -ldl -lfontconfig -pthread -lexpat -lm -lfreetyped -lbz2d -lpng16d -lm -lz -lbrotlidec -lbrotlicommon -lm -lXrender -lpixman-1 -lm -pthread -lX11 -lXext
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs cairo-xlib` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lcairo -lm -ldl -lfontconfig -pthread -lexpat -lm -lfreetyped -lbz2d -lpng16d -lm -lz -lbrotlidec -lbrotlicommon -lm -lXrender -lpixman-1 -lm -pthread -lX11 -lXext
-----------
Run-time dependency cairo-xlib found: YES 1.18.4
Determining dependency 'cairo-script-interpreter' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion cairo-script-interpreter` -> 0
stdout:
1.18.4
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags cairo-script-interpreter` -> 0
stdout:
-pthread -DXML_STATIC -pthread -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/cairo -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/libpng16 -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include -I/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../../include/pixman-1
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs cairo-script-interpreter` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -L/usr/lib/x86_64-linux-gnu -lcairo-script-interpreter -lm -ldl -lcairo -lm -ldl -lfontconfig -pthread -lexpat -lm -lfreetyped -lbz2d -lpng16d -lm -lz -lbrotlidec -lbrotlicommon -lm -lXext -lXrender -lX11 -lpixman-1 -lm -pthread
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs cairo-script-interpreter` -> 0
stdout:
-L/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig/../../lib -lcairo-script-interpreter -lm -ldl -lcairo -lm -ldl -lfontconfig -pthread -lexpat -lm -lfreetyped -lbz2d -lpng16d -lm -lz -lbrotlidec -lbrotlicommon -lm -lXext -lXrender -lX11 -lpixman-1 -lm -pthread
-----------
Run-time dependency cairo-script-interpreter found: YES 1.18.4
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --variable=epoxy_has_egl epoxy` -> 0
stdout:
1
-----------
Got pkg-config variable epoxy_has_egl : 1
Determining dependency 'xrandr' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xrandr` -> 0
stdout:
1.5.2
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags xrandr` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xrandr` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lXrandr
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xrandr` -> 0
stdout:
-lXrandr
-----------
Run-time dependency xrandr found: YES 1.5.2
Dependency xrandr found: YES 1.5.2 (cached)
Determining dependency 'x11' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion x11` -> 0
stdout:
1.7.5
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags x11` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs x11` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lX11
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs x11` -> 0
stdout:
-lX11
-----------
Run-time dependency x11 found: YES 1.7.5
Determining dependency 'xrender' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xrender` -> 0
stdout:
0.9.10
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags xrender` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xrender` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lXrender -lX11
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xrender` -> 0
stdout:
-lXrender -lX11
-----------
Run-time dependency xrender found: YES 0.9.10
Determining dependency 'xi' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xi` -> 0
stdout:
1.8
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags xi` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xi` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lXi
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xi` -> 0
stdout:
-lXi
-----------
Run-time dependency xi found: YES 1.8
Determining dependency 'xext' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xext` -> 0
stdout:
1.3.4
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags xext` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xext` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lXext
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xext` -> 0
stdout:
-lXext
-----------
Run-time dependency xext found: YES 1.3.4
Determining dependency 'xcursor' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xcursor` -> 0
stdout:
1.2.0
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --cflags xcursor` -> 0
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_ALLOW_SYSTEM_LIBS]: 1
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xcursor` -> 0
stdout:
-L/usr/lib/x86_64-linux-gnu -lXcursor
-----------
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --libs xcursor` -> 0
stdout:
-lXcursor
-----------
Run-time dependency xcursor found: YES 1.2.0
Determining dependency 'xdamage' with pkg-config executable '/bin/pkg-config'
env[PKG_CONFIG]: /bin/pkg-config
env[PKG_CONFIG_PATH]: /home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/debug/lib/pkgconfig:/home/marcel/Documents/code_projects/omega/vcpkg_installed/x64-linux/share/pkgconfig
-----------
Called: `/bin/pkg-config --modversion xdamage` -> 1
stderr:
Package xdamage was not found in the pkg-config search path.
Perhaps you should add the directory containing `xdamage.pc'
to the PKG_CONFIG_PATH environment variable
No package 'xdamage' found
-----------
CMake binary for host machine is cached.
Preliminary CMake check failed. Aborting.
Run-time dependency xdamage found: NO (tried pkgconfig and cmake)

../src/4.16.3-43597d369f.clean/meson.build:527:19: ERROR: Dependency "xdamage" not found, tried pkgconfig and cmake
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "omega",
  "dependencies": [
    "gtk",
    "gtkmm"
  ]
}

```
</details>
