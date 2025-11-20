# C project template

Small starter C project with a Makefile-based build, header/library split, and IDE-friendly flags.

## Prerequisites
- POSIX `make`
- A C17-capable compiler (`cc`, `clang`, or `gcc`)

## Build and run
```bash
make          # compile to build/app
make run      # compile and run build/app
make clean    # remove build artifacts
```

Pass an optional name argument to change the greeting:
```bash
./build/app Ada
```

## Project layout
- `src/` implementation files (`main.c` entry point, `app.c` library code)
- `include/` public headers (`app.h`)
- `build/` generated objects and binary (created by the Makefile)
- `compile_flags.txt` hints for clangd/IDE (matches Makefile flags)

## Development notes
- Compiler flags (in `Makefile` and `compile_flags.txt`): `-Wall -Wextra -Werror -std=c17 -Iinclude`
- Adjust `CFLAGS`/`LDFLAGS` in the `Makefile` for extra warnings, sanitizers, or libraries.
- Add new modules as `src/foo.c` with corresponding headers in `include/`.

## Getting ready for GitHub
1. Initialize the repo and commit:
   ```bash
   git init
   git add .
   git commit -m "Initial commit"
   ```
2. Create a repository on GitHub and add it as a remote:
   ```bash
   git remote add origin https://github.com/<user>/<repo>.git
   git push -u origin main
   ```

## Future improvements
- Add unit tests (e.g., with Unity/CMock or Criterion) and a `make test` target.
- Add CI (GitHub Actions) to build/test on push.
