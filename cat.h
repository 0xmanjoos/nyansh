#pragma once
// this is the treasury of god, he doesnt need these anymore
// god is dead, these belong to us now
// we killed god
// we did this.

void nyancat(const char* file) {

    struct stat s;
    if (!access(file, F_OK)==0) {
        puts("Cannot fwind fwile! owo");
        exit(0);
    }
    int fd = open(file, O_RDONLY);
    if (fstat(fd, &s)==-1) {
        perror("Could nyat open fwyile uwu!");
    } else {
        char* filemap = mmap(NULL, s.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
        for (int i=0;i < s.st_size;i++) {
            if ((i%2)==0) {
                putchar(toupper(filemap[i]));
            } else {
                putchar(filemap[i]);
            }
        }
    }
}
