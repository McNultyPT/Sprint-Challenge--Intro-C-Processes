#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *dir;
  struct dirent *dirent;
  struct stat buf;

  // Open directory
  if (argc < 2) {
    dir = opendir(".");
  } else {
    dir = opendir(argv[1]);
  }

  if (dir == NULL) {
    return 1;
  }

  // Repeatly read and print entries
  char filepath[] = "./";

  while((dirent = readdir(dir)) != NULL) {
    char *copypath = strdup(filepath);
    strcat(copypath, dirent->d_name);
    stat(copypath, &buf);
    printf("%lld bytes %s\n", buf.st_size, dirent->d_name);
  }

  // Close directory
  closedir(dir);
  return 0;
}

//  gcc -Wall -Wextra -o lsls lsls.c