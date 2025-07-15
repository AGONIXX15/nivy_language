Package: libsass:arm64-osx@3.6.6

**Host Environment**

- Host: arm64-osx
- Compiler: AppleClang 17.0.0.17000013
-    vcpkg-tool version: 2025-06-20-ef7c0d541124bbdd334a03467e7edb6c3364d199
    vcpkg-scripts version: efcfaaf60d 2025-07-10 (3 days ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Using cached sass-libsass-3.6.6.tar.gz
-- Cleaning sources at /Users/marcel/Documents/external/vcpkg/buildtrees/libsass/src/3.6.6-2b299a597d.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source /Users/marcel/Documents/external/vcpkg/downloads/sass-libsass-3.6.6.tar.gz
-- Applying patch remove_compiler_flags.patch
-- Using source at /Users/marcel/Documents/external/vcpkg/buildtrees/libsass/src/3.6.6-2b299a597d.clean
-- Getting CMake variables for arm64-osx-dbg
-- Getting CMake variables for arm64-osx-rel
-- Generating configure for arm64-osx
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: /opt/homebrew/bin/autoreconf -vfi
    Working Directory: /Users/marcel/Documents/external/vcpkg/buildtrees/libsass/src/3.6.6-2b299a597d.clean/
    Error code: 2
    See logs for more information:
      /Users/marcel/Documents/external/vcpkg/buildtrees/libsass/autoconf-arm64-osx-err.log

Call Stack (most recent call first):
  scripts/cmake/vcpkg_configure_make.cmake:731 (vcpkg_execute_required_process)
  ports/libsass/portfile.cmake:10 (vcpkg_configure_make)
  scripts/ports.cmake:206 (include)



```

<details><summary>/Users/marcel/Documents/external/vcpkg/buildtrees/libsass/autoconf-arm64-osx-err.log</summary>

```
autoreconf: export WARNINGS=
autoreconf: Entering directory '.'
autoreconf: configure.ac: not using Gettext
autoreconf: running: aclocal --force 
Can't exec "aclocal": No such file or directory at /opt/homebrew/Cellar/autoconf/2.72/share/autoconf/Autom4te/FileUtils.pm line 299.
autoreconf: error: aclocal failed with exit status: 2
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "omega",
  "dependencies": [
    "gtkmm"
  ]
}

```
</details>
