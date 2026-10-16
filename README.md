# MP3 Tag Reader and Editor 🎵

## 📌 Project Overview

The **MP3 Tag Reader and Editor** is a command-line application developed using C that reads and displays metadata stored in MP3 audio files. It works with ID3 tags to retrieve information such as song title, artist, album, year, genre, and other supported fields.

This project helped me strengthen my understanding of file handling, structures, pointers, and string manipulation in C.

## 🎯 Objectives

- Read metadata from MP3 audio files.
- Understand the structure of ID3 tags.
- Extract and display audio information.
- Practice binary file operations in C.
- Develop a command-line application with structured output.

## 🛠️ Technologies Used

- **Programming Language:** C
- **File Handling:** `fopen()`, `fread()`, `fwrite()`, `fseek()`, `fclose()`
- **Concepts:** Structures, pointers, arrays, string manipulation, command-line arguments
- **File Format:** MP3 with ID3 metadata

## ✨ Features

- Read MP3 metadata from audio files.
- Display supported tag information, including:
  - Title
  - Artist
  - Album
  - Year
  - Genre
  - Comment (if supported by the implementation)
- Accept command-line arguments to specify operations and filenames.
- Parse metadata from binary files.

## 📂 Project Structure

```text
MP3-Tag-Reader/
├── main.c
├── view.c
├── edit.c
├── view.h
├── edit.h
├── mp3Audio.mp3
└── README.md

## ⚙️ Compilation

Alternatively, compile the source files using GCC:

```bash
gcc *.c -o mp3_tag_reader
```

## ▶️ How to Run

### Read MP3 Metadata

```bash
./mp3_tag_reader -r mp3Audio.mp3
```

Example output:

```text
-----------------------------------------
       MP3 Tag Reader and Editor
-----------------------------------------
Title   : Sunny Sunny
Artist  : Yo Yo Honey Singh
Album   : Yaariyan
Year    : 2013
Genre   : Bollywood Music
-----------------------------------------
```


### Edit MP3 Metadata

```bash
./mp3_tag_reader -e -t "New Song Title" mp3Audio.mp3
```


## 🧠 Concepts Learned

- **Binary File Handling:** Reading binary metadata using file operations.
- **Structures:** Organizing tag information into structured data.
- **Pointers:** Accessing and processing data efficiently.
- **String Manipulation:** Handling metadata fields and character arrays.
- **Command-Line Arguments:** Accepting user input through `argc` and `argv`.
- **ID3 Tag Parsing:** Understanding how audio metadata is represented in a file.

## 🧪 Testing

I tested the program using MP3 files containing metadata and checked whether the supported fields were read and displayed correctly.

Example test files used during development included `mp3Audio.mp3`.

## 🚀 Future Enhancements

- Improve validation for invalid or unsupported MP3 files.
- Add more comprehensive error handling.
- Support additional ID3 tag versions and metadata fields.
- Improve metadata editing and verification.
- Handle missing or malformed tags more robustly.

## 👨‍💻 Author

**Sivaraman T**


## 📚 Learning Outcome

This project strengthened my practical knowledge of C programming, particularly binary file operations, pointers, structures, and metadata parsing. It also improved my ability to build and debug command-line applications.
