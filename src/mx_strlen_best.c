int mx_strlen_best(const char *s) {
    int result = 0;
    
    if (s != '\0')
        while(*s++ != '\0')
            result++;
    return result;
}
