# FastSearch

**FastSearch** is a high-performance file search tool written in C++. It is designed to efficiently search through large directories, making it ideal for power users, developers, or companies managing massive file systems. With multi-threading and fast indexing, FastSearch makes file searching more efficient than ever before!

## Features - Why FastSearch?

- **Open Source Forever**: FastSearch is 100% free and open-source with no paid versions. It’s built to be maintained and extended by the community.
- **Fast Search**: Optimized for speed, FastSearch uses advanced indexing techniques to quickly search large file systems.
- **Multi-threading**: The program supports multi-threading, speeding up both file indexing and search operations.
- **Cross-platform**: Compatible with Windows and Linux (macOS support can be added).
- **Efficient File Indexing**: Builds an index of file paths and names to perform fast searches without having to repeatedly read files.
- **Simple Command-Line Interface (CLI)**: Easy to use, no installation required, and fully configurable.
- **Lightweight**: Consumes minimal system resources while delivering high performance.

---

## Installation

### Prerequisites

Before you begin, ensure you have the following:

- **C++17 or later** compatible compiler.
- **CMake** for building the project.

### Clone the Repository

```bash
git clone https://github.com/semajavoye/FastSearch.git
cd FastSearch
```

### Building
```bash
mkdir build
```

```bash
g++ .\src\main.cpp -o .\build\FastSearch.exe
```

```bash
.\build\FastSearch.exe
```

---

## Usage

### Indexing Files

To index files in a directory, simply run the following command:

```bash
FastSearch index /path/to/directory
```

This will scan the directory and create an index of all files, storing their names and paths in memory. The index will significantly speed up subsequent searches.

FastSearch also allows you to index your entire system! **Please note:** This operation can require substantial disk space and may take a considerable amount of time, especially with a large number of files.

### Searching for Files

To search for a specific file, use the following command:

```bash
FastSearch search "filename"
```

You can search for complete or partial file names, and FastSearch will return all matching results.

### Searching in Files

To search for a string within one or multiple files, use the following command:

```bash
FastSearch find "yoursearch" <directory (empty for every directory you indexed)>
```

This will search for the specified string within the indexed files.

---

## Advanced Features

- **Multi-threaded Indexing**: FastSearch can index multiple files concurrently, speeding up the indexing process, especially for large datasets.
- **Result Caching**: The index can be saved to disk, so if the program is closed and reopened, future searches are faster by skipping re-indexing.

---

## Contributing

We welcome contributions! If you have suggestions or encounter bugs, feel free to open an issue or submit a pull request. Please ensure your code follows the existing style and includes appropriate documentation.

---

## License

FastSearch is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

## Contact

For more information, or if you have questions or suggestions, feel free to contact us:

- **Email**: semaja.voye5_8@gmx.de
- **GitHub**: [https://github.com/semajavoye/FastSearch](https://github.com/semajavoye/FastSearch)

---

### Thank You for Using FastSearch!

We hope FastSearch improves your file searching experience. Feel free to open issues, contribute, and let us know how we can enhance the tool!