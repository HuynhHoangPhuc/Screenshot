//
// Created by Phuc Huynh Hoang on 21/06/2022.
//

#ifndef SCREENSHOT_UNISTD_H
#define SCREENSHOT_UNISTD_H

#include <stdlib.h>
#include <io.h>
#include <getopt.h> /* getopt at: https://gist.github.com/ashelly/7776712 */
#include <process.h> /* for getpid() and the exec..() family */
#include <direct.h> /* for _getcwd() and _chdir() */
#include <cstdint>

#define srandom srand
#define random rand

/* Values for the second argument to access.
   These may be OR'd together.  */
#define R_OK    4       /* Test for read permission.  */
#define W_OK    2       /* Test for write permission.  */
//#define   X_OK    1       /* execute permission - unsupported in windows*/
#define F_OK    0       /* Test for existence.  */

#define access _access
#define dup2 _dup2
#define execve _execve
#define ftruncate _chsize
#define unlink _unlink
#define fileno _fileno
#define getcwd _getcwd
#define chdir _chdir
#define isatty _isatty
#define lseek _lseek
/* read, write, and close are NOT being #defined here, because while there are file handle specific versions for Windows, they probably don't work for sockets. You need to look at your app and consider whether to call e.g. closesocket(). */

#ifdef _WIN64
#define ssize_t int64_t
#else
#define ssize_t long
#endif

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#endif //SCREENSHOT_UNISTD_H
