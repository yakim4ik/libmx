#include "libmx.h"

#include <stdio.h>
#include <string.h>

// static bool cmp_sort_list(void *a, void *b) {
//     return a > b ? true : false;
// }

int main(/*int argc, char *argv[]*/) {
    // mx_printstr(" **********************\n *\tUTILS PACK    *\n **********************\n\n");
    // mx_printstr("----------------MX_PRINTCHAR-------------------\n");
    //     mx_printstr("mx_printchar 'h' | "); mx_printchar('h'); mx_printstr("\n");
    //     mx_printstr("mx_printchar 'A' | "); mx_printchar('A'); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINT_UNICODE-------------------\n"); // CORRECT IT !!!!!!
    //     mx_printstr("mx_printchar 'h' | "); mx_printchar('h'); mx_printstr("\n");
    //     mx_printstr("mx_printchar 'A' | "); mx_printchar('A'); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINTSTR-------------------\n");
    //     mx_printstr("function works correctly"); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINT_STRARR-------------------\n");
    //     char *print_strarr[5] = {"abc", "xyz", "ghi", "def", NULL};
    //     mx_printstr("mx_print_strarr returns \"abc xyz ghi def\"? | "); mx_print_strarr(print_strarr, " ");
    //     mx_printstr("mx_print_strarr returns nothing? | "); mx_print_strarr(print_strarr, NULL);
    //     mx_printstr("mx_print_strarr returns nothing? | "); mx_print_strarr(NULL, NULL);
    //     mx_printstr("mx_print_strarr returns nothing? | "); mx_print_strarr(NULL, " ");

    // mx_printstr("\n\n----------------MX_PRINTINT-------------------\n");
    //     mx_printstr("mx_printint -2147483648 | "); mx_printint(-2147483648); mx_printstr("\n");
    //     mx_printstr("mx_printint -1 | "); mx_printint(-1); mx_printstr("\n");
    //     mx_printstr("mx_printint 0 | "); mx_printint(0); mx_printstr("\n");
    //     mx_printstr("mx_printint 1 | "); mx_printint(1); mx_printstr("\n");
    //     mx_printstr("mx_printint of 2147483647 | "); mx_printint(2147483647); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_POW-------------------\n");
    //     mx_printstr("mx_pow 3, 3 is 27? | "); 
    //     printf("%.0f\n", mx_pow(3, 3));
    //     mx_printstr("mx_pow 2.5, 3 is 15.625? | "); 
    //     printf("%.3f\n",mx_pow(2.5, 3));
    //     mx_printstr("mx_pow 2, 0 is 1 | "); 
    //     printf("%.0f\n",mx_pow(2, 0));

    // mx_printstr("\n\n----------------MX_SQRT-------------------\n");
    //     mx_printstr("mx_sqrt 3 is 0? | "); mx_printint(mx_sqrt(3)); mx_printstr("\n");
    //     mx_printstr("mx_sqrt 4 is 2? | "); mx_printint(mx_sqrt(4)); mx_printstr("\n");
    //     mx_printstr("mx_sqrt 625 is 25? | "); mx_printint(mx_sqrt(625)); mx_printstr("\n");
    //     mx_printstr("mx_sqrt 2147395600 is 46340? | "); mx_printint(mx_sqrt(2147395600)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_NBR_TO_HEX-------------------\n");
    //     char *hex1 = mx_nbr_to_hex(52);
    //     char *hex2 = mx_nbr_to_hex(1000);
    //     mx_printstr("mx_nbr_to_hex of 52 is 34? | "); mx_printstr(hex1); mx_printstr("\n");
    //     mx_printstr("mx_nbr_to_hex of 1000 is 3e8? | "); mx_printstr(hex2); mx_printstr("\n");


    // mx_printstr("\n\n----------------MX_HEX_TO_NBR-------------------\n");
    //     mx_printstr("mx_hex_to_nbr of \"c4\" is 196? | "); mx_printint(mx_hex_to_nbr("c4")); mx_printstr("\n");
    //     mx_printstr("mx_hex_to_nbr of \"fade\" is 64222? | "); mx_printint(mx_hex_to_nbr("FADE")); mx_printstr("\n");
    //     mx_printstr("mx_hex_to_nbr of NULL is 0 | "); mx_printint(mx_hex_to_nbr(NULL)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_ITOA-------------------\n");
    //     char *integer1 = mx_itoa(-2147483648);
    //     mx_printstr("mx_itoa returns -2147483648? | "); printf("%s\n", integer1);
    //     char *integer2 = mx_itoa(-11);
    //     mx_printstr("mx_itoa returns -11? | "); printf("%s\n", integer2);
    //     char *integer3 = mx_itoa(-1);
    //     mx_printstr("mx_itoa returns -1? | "); printf("%s\n", integer3);
    //     char *integer4 = mx_itoa(0);
    //     mx_printstr("mx_itoa returns 0? | "); printf("%s\n", integer4);
    //     char *integer5 = mx_itoa(1);
    //     mx_printstr("mx_itoa returns 1? | "); printf("%s\n", integer5);
    //     char *integer6 = mx_itoa(10);
    //     mx_printstr("mx_itoa returns 10? | "); printf("%s\n", integer6);
    //     char *integer7 = mx_itoa(1234);
    //     mx_printstr("mx_itoa returns 1234? | "); printf("%s\n", integer7);
    //     char *integer8 = mx_itoa(2147483647);
    //     mx_printstr("mx_itoa returns 2147483647? | "); printf("%s\n", integer8);

    // mx_printstr("\n\n----------------MX_FOREACH-------------------\n");
    //     int foreach[5] = {1, 2, 3, 4, 5};
    //     mx_printstr("mx_foreach result is 12345? | "); mx_foreach(foreach, 5, mx_printint); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_BINARY_SEARCH-------------------\n");
    //     char *binary_arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    //     int binary_count = 0;
    //     mx_printstr("mx_binary_search returns 3 and 3? | "); mx_printint(mx_binary_search(binary_arr, 6, "ab", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");
    //     binary_count = 0;
    //     mx_printstr("mx_binary_search returns 2 and 1? | "); mx_printint(mx_binary_search(binary_arr, 6, "aBc", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");
    //     binary_count = 0;
    //     mx_printstr("mx_binary_search returns -1 and 0? | "); mx_printint(mx_binary_search(binary_arr, 6, "aBz", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");


    // mx_printstr("\n\n----------------MX_BUBBLE_SORT-------------------\n");
    //     char *bubble_arr[4] = {"abc", "xyz", "ghi", "def"};
    //     mx_printstr("mx_bubble_sort returns 3? | "); mx_printint(mx_bubble_sort(bubble_arr, 4)); mx_printstr("\n");
    //     char *bubble_arr2[3] = {"abc", "acb", "a"};
    //     mx_printstr("mx_bubble_sort returns 2? | "); mx_printint(mx_bubble_sort(bubble_arr2, 3)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_QUICK_SORT-------------------\n");
    //     char *quicksort_arr1[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    //     char *quicksort_arr2[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Biff Tannen"};
    //     mx_printstr("mx_quicksort returns 2? | "); mx_printint(mx_quicksort(quicksort_arr1, 0, 3)); mx_printstr("\n");
    //     mx_printstr("arr1 is \"Raphael\" \"Leonardo\" \"Donatello\" \"Michelangelo\" | ");
    //     for (int i = 0; i < 4; i++) {
    //         mx_printstr("\""); mx_printstr(quicksort_arr1[i]); mx_printstr("\"");
    //         mx_printstr(" ");
    //     }
    //     mx_printstr("\n");
    //     mx_printstr("mx_quicksort returns 2? | "); mx_printint(mx_quicksort(quicksort_arr2, 0, 5)); mx_printstr("\n");
    //     mx_printstr("arr2 is \"DMC\" \"Jessica\" \"Dr Brown\" \"Einstein\" \"Biff Tannen\" \"Clint Eastwood\" | ");
    //     for (int i = 0; i < 6; i++) {
    //         mx_printstr("\""); mx_printstr(quicksort_arr2[i]); mx_printstr("\"");
    //         mx_printstr(" ");
    //     }
    //     mx_printstr("\n");
    //     mx_printstr("mx_quicksort returns -1? | "); mx_printint(mx_quicksort(NULL, 0, 5)); mx_printstr("\n");

    // mx_printstr(" **********************\n *\tSTRING PACK   *\n **********************\n\n");
    // mx_printstr("\n\n----------------MX_STRLEN-------------------\n");
    //     mx_printstr("mx_strlen returns 9? | "); mx_printint(mx_strlen("game over")); mx_printstr("\n");
    //     mx_printstr("mx_strlen returns 12? | "); mx_printint(mx_strlen("hello world!")); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_SWAP_CHAR-------------------\n");
    //     char swap_char[] = "ONE";
    //     mx_printstr("mx_swap_char returns NOE? | "); mx_swap_char(&swap_char[0], &swap_char[1]); mx_printstr(swap_char); mx_printstr("\n");
    //     mx_printstr("mx_swap_char returns NEO? | "); mx_swap_char(&swap_char[1], &swap_char[2]); mx_printstr(swap_char); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STR_REVERSE-------------------\n");
    //     char str_reverse[] = "game over";
    //     mx_str_reverse(str_reverse);
    //     mx_printstr("mx_str_reverse of \"game over\" is revo emag | "); mx_printstr(str_reverse); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRDEL-------------------\n");
    //     char *strdel = strdup("full string");
    //     mx_printstr("before mx_strdel string is \"full string\"? | "); mx_printstr(strdel); mx_printstr("\n");
    //     mx_strdel(&strdel);
    //     mx_printstr("after mx_strdel string is (null)? | "); printf("%s\n", strdel);

    // mx_printstr("\n\n----------------MX_DEL_STRARR-------------------\n");
    //     char **strarr = (char **)malloc(sizeof(char *) * 3);
    //     strarr[0] = strdup("abc"); strarr[1] = strdup("xyz"); strarr[2] = NULL;
    //     mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]); 
    //     mx_del_strarr(&strarr);
    //     mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr);

    // mx_printstr("\n\n----------------MX_GET_CHAR_INDEX-------------------\n");
    //     char *get_char_index = "123456789";
    //     mx_printstr("mx_get_char_index returns 4? | "); mx_printint(mx_get_char_index(get_char_index, '5')); mx_printstr("\n");
    //     mx_printstr("mx_get_char_index returns -1? | "); mx_printint(mx_get_char_index(get_char_index, 'A')); mx_printstr("\n");
    //     mx_printstr("mx_get_char_index returns -2? | "); mx_printint(mx_get_char_index(NULL, '5')); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRDUP-------------------\n");
    //     char *strdup1 = mx_strdup("12345679");
    //     mx_printstr("mx_strdup returns \"123456789\"? | "); mx_printstr(strdup1); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRNDUP-------------------\n");
    //     char *strndup = mx_strndup("hello", 20);
    //     mx_printstr("mx_strndup returns \"hello\"? | "); mx_printstr(strndup); mx_printstr("\n");


    // mx_printstr("\n\n----------------MX_STRCPY-------------------\n");
    //     const char *strcpy = "123456789"; char dstcpy[15];
    //     mx_printstr("mx_strcpy returns \"123456789\"? | "); mx_printstr(mx_strcpy(dstcpy, strcpy)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRNCPY-------------------\n");
    //     const char *strncpy = "123456789"; char dstncpy[15];
    //     mx_printstr("mx_strncpy returns \"12345\"? | "); mx_printstr(mx_strncpy(dstncpy, strncpy, 5)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRCMP-------------------\n");
    //     char *strcmp1 = "aaaaaaa"; char *strcmp2 = "aaaaaaaA"; char *strcmp3 = "aaaaaaa";
    //     mx_printstr("strcmp returns \""); mx_printint(strcmp(strcmp2, strcmp1));
    //     mx_printstr("\". mx_strcmp returns the same? | "); mx_printint(mx_strcmp(strcmp2, strcmp1)); mx_printstr("\n");
    //     mx_printstr("strcmp returns \""); mx_printint(strcmp(strcmp1, strcmp2));
    //     mx_printstr("\". mx_strcmp returns the same? | "); mx_printint(mx_strcmp(strcmp1, strcmp2)); mx_printstr("\n");
    //     mx_printstr("strcmp returns \""); mx_printint(strcmp(strcmp1, strcmp3));
    //     mx_printstr("\". mx_strcmp returns the same? | "); mx_printint(mx_strcmp(strcmp1, strcmp3)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRCAT-------------------\n");
    //     char strcat1[10] = "12345"; char strcat2[5] = "6789";
    //     char strcat3[10] = "12345"; char strcat4[5] = "6789";
    //     printf("strcat returns \"%s\". mx_strcat returns the same? | %s\n", strcat(strcat1, strcat2), mx_strcat(strcat3, strcat4));

    // mx_printstr("\n\n----------------MX_STRSTR-------------------\n");
    //     char *strstr1 = "12345679";
    //     char *cmp = "5";
    //     printf("strstr returns \"%s\". mx_strstr returns the same? | %s\n", strstr(strstr1, cmp), mx_strstr(strstr1, cmp));

    // mx_printstr("\n\n----------------MX_GET_SUBSTR_INDEX-------------------\n");
    //     mx_printstr("mx_get_substr_index \"2\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Don")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"3\"? | "); mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-1\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Donatello")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index("McDonalds", NULL)); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index(NULL, "Don")); mx_printstr("\n");

    // write(1, "\n\n----------------MX_COUNT_SUBSTR-------------------\n", 53);
    //     char *count_substr = "yo, yo, yo Neo";
    //     mx_printstr("mx_count_substr returns \"3\"? | "); mx_printint(mx_count_substr(count_substr, "yo")); mx_printstr("\n");
    //     mx_printstr("mx_count_substr returns \"-1\"? (null's check) | "); mx_printint(mx_count_substr(count_substr, NULL)); mx_printstr("\n");
    //     mx_printstr("mx_count_substr returns \"-1\"? (null's check) | "); mx_printint(mx_count_substr(NULL, "yo")); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_COUNT_WORDS-------------------\n");
    //     char *count_words = "   follow  *    the   white   rabbit";
    //     mx_printstr("mx_count_words returns \"2\"? | "); mx_printint(mx_count_words(count_words, '*')); mx_printstr("\n");
    //     mx_printstr("mx_count_words returns \"5\"? | "); mx_printint(mx_count_words(count_words, ' ')); mx_printstr("\n");
    //     mx_printstr("mx_count_words returns \"-1\"? (null's check) | "); mx_printint(mx_count_words(NULL, ' ')); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRNEW-------------------\n");
    //     char *strnew = mx_strnew(5);
    //     mx_printstr("mx_strnew returns \"^@^@^@^@^@$\"? (check with cat -e) | "); write( 1, strnew, 5); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRTRIM-------------------\n");
    //     char strtrim[] = "\f    My name... is Neo   \t\n ";
    //     char strtrim2[] = "My name... is Neo   \t\n ";
    //     char strtrim3[] = "           \t             \n ";
    //     char *cleared_trim = mx_strtrim(strtrim);
    //     char *cleared_trim2 = mx_strtrim(strtrim2);
    //     char *cleared_trim3 = mx_strtrim(strtrim3);
    //     mx_printstr("mx_strtrim returns \"My name.. is Neo\"? | "); mx_printstr(cleared_trim); mx_printstr("\n");
    //     mx_printstr("mx_strtrim returns \"My name.. is Neo\"? | "); mx_printstr(cleared_trim2); mx_printstr("\n");
    //     mx_printstr("mx_strtrim returns \"\"? | "); printf("\"%s\"\n", cleared_trim3);
    //     mx_printstr("mx_strtrim returns (null)? | "); printf("%s\n", mx_strtrim(NULL));

    // mx_printstr("\n\n----------------MX_DEL_EXTRA_SPACES-------------------\n");
    //     char del_spaces[] = "\f    My name...      is    \r  Neo   \t\n ";
    //     char del_spaces2[] = "           \t             \n ";
    //     char *cleared_del_spaces = mx_del_extra_spaces(del_spaces), *cleared_del_spaces2 = mx_del_extra_spaces(del_spaces2);
    //     mx_printstr("mx_del_extra_spaces returns \"My name.. is Neo\"? | "); mx_printstr(cleared_del_spaces); mx_printstr("\n");
    //     mx_printstr("mx_del_extra_spaces returns \"\"? | "); printf("\"%s\"\n", cleared_del_spaces2);
    //     mx_printstr("mx_del_extra_spaces returns (null)? | "); printf("%s\n", mx_del_extra_spaces(NULL));

    // mx_printstr("\n\n----------------MX_STRSPLIT-------------------\n");
    //     char strsplit[] = "**Good bye,**Mr.*Anderson.****";
    //     char **splited = mx_strsplit(strsplit, '*');
    //     char strsplit2[] = "       Knock, knock,         Neo.         ";
    //     char **splited2 = mx_strsplit(strsplit2, ' ');
    //     char **splited3 = mx_strsplit(NULL, ' ');
    //     mx_printstr("mx_strsolit returns is \"Good bye,\" \"Mr.\" \"Anderson.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited[0], splited[1], splited[2], splited[3]); 
    //     mx_printstr("mx_strsolit returns is \"Knock,\" \"knock,\" \"Neo.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited2[0], splited2[1], splited2[2], splited2[3]); 
    //     mx_printstr("mx_strsolit returns (null)? | "); printf("%s\n", (char *)splited3);

    // mx_printstr("\n\n----------------MX_STRJOIN-------------------\n");
    //     char *strjoin1 = "this", *strjoin2 = "dodge ", *strjoin3 = NULL;
    //     char *strjoin_result1 = mx_strjoin(strjoin2, strjoin1);
    //     char *strjoin_result2 = mx_strjoin(strjoin1, strjoin3);
    //     char *strjoin_result3 = mx_strjoin(strjoin3, strjoin2);
    //     char *strjoin_result4 = mx_strjoin(strjoin3, strjoin3);
    //     mx_printstr("mx_strjoin returns \"dodge this\"? | "); mx_printstr(strjoin_result1); mx_printstr("\n");
    //     mx_printstr("mx_strjoin returns \"this\"? | "); mx_printstr(strjoin_result2); mx_printstr("\n");
    //     mx_printstr("mx_strjoin returns \"dodge \"? | "); mx_printstr(strjoin_result3); mx_printstr("\n");
    //     mx_printstr("mx_strjoin returns \"(null)\"? | "); printf("%s\n", strjoin_result4);

    // // mx_printstr("\n\n----------------MX_FILE_TO_STR-------------------\n"); // HOW TO CHECK??????????
    // //     mx_printstr("check function with ./a.out src/mx_strlen.c\n");
    // //     if (argc > 1) {
    // //         char *file_to_str = mx_file_to_str(argv[1]);
    // //         mx_printstr(file_to_str);
    // //     }

    // mx_printstr("\n\n----------------MX_READ_LINE-------------------\n"); // CORRECT IT !!!!!!


    // mx_printstr("\n\n----------------MX_REPLACE_SUBSTR-------------------\n");
    //     char replace_substr1[] = "McDonalds";
    //     char replace_substr2[] = "Ururu turu";
    //     char *repleced1 = mx_replace_substr(replace_substr1, "alds", "uts");
    //     char *repleced2 = mx_replace_substr(replace_substr2, "ru", "ta");
    //     char *repleced3 = mx_replace_substr(replace_substr2, NULL, "ta");
    //     char *repleced4 = mx_replace_substr(NULL, "ru", "ta");
    //     char *repleced5 = mx_replace_substr(replace_substr2, "ru", NULL);
    //     mx_printstr("mx_replace_substr returns \"McDonuts\"? | "); mx_printstr(repleced1); mx_printstr("\n");
    //     mx_printstr("mx_replace_substr returns \"Utata tuta\"? | "); mx_printstr(repleced2); mx_printstr("\n");
    //     mx_printstr("mx_replace_substr returns \"(null)\"? | "); printf("%s\n", repleced3);
    //     mx_printstr("mx_replace_substr returns \"(null)\"? | "); printf("%s\n", repleced4);
    //     mx_printstr("mx_replace_substr returns \"(null)\"? | "); printf("%s\n", repleced5);

    //     // char *str = "123456789\n";
    //     // mx_printstr(str);
    //     // str +=2;
    //     // mx_printstr(str);
    //     // str +=4;
    //     // mx_printstr(str);
    //     // str -=6;
    //     // mx_printstr(str);





    // mx_printstr(" *************************************\n *\t      MEMORY PACK\t     *\n *************************************\n\n");

    // mx_printstr(" *************************************\n *\t\tLIST PACK\t     *\n *************************************\n\n");
    // mx_printstr("\n----------------MX_CREATE_NODE-------------------\n");
    //     char *create_node_str = "HEAD";
    //     t_list *create_node = mx_create_node(create_node_str), *head = create_node;
    //     for (int i = 0; create_node; i++) {
    //         char *buf = (char *)create_node->data;
    //         mx_printstr("mx_create_node returns \"HEAD\"? | "); mx_printstr(buf); mx_printstr("\n");
    //         create_node = create_node->next;
    //     }
    //     free(create_node), free(head);

    // mx_printstr("\n\n----------------MX_PUSH_FRONT-------------------\n");
    //     char *front_str = "HEAD", *front_str1 = "STR1", *front_str2 = "STR2", *front_str3 = "STR3";
    //     t_list *front_new_list = NULL;
    //     mx_push_front(&front_new_list, front_str3);
    //     mx_push_front(&front_new_list, front_str2);
    //     mx_push_front(&front_new_list, front_str1);
    //     mx_push_front(&front_new_list, front_str);
    //     t_list *front_head = front_new_list;
    //     mx_printstr("mx_push_front returns \"HEAD\" \"STR1\" \"STR2\" \"STR3\"? | ");
    //     for (int i = 0; front_new_list; i++) {
    //         char *buf = (char *)front_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         front_new_list = front_new_list->next;
    //     }
    //     mx_printstr("\n");
    //     while (front_new_list)
    //         mx_pop_front(&front_new_list);
    //     while (front_head)
    //         mx_pop_front(&front_head);

    // mx_printstr("\n\n----------------MX_PUSH_BACK-------------------\n");
    //     char *back_str = "HEAD", *back_str1 = "STR1", *back_str2 = "STR2", *back_str3 = "STR3";
    //     t_list *back_new_list = NULL;
    //     mx_push_back(&back_new_list, back_str);
    //     mx_push_back(&back_new_list, back_str1);
    //     mx_push_back(&back_new_list, back_str2);
    //     mx_push_back(&back_new_list, back_str3);
    //     t_list *back_head = back_new_list;
    //     mx_printstr("mx_push_back returns \"HEAD\" \"STR1\" \"STR2\" \"STR3\"? | ");
    //     for (int i = 0; back_new_list; i++) {
    //         char *buf = (char *)back_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         back_new_list = back_new_list->next;
    //     }
    //     mx_printstr("\n");
    //     while (back_new_list)
    //         mx_pop_front(&back_new_list);
    //     while (back_head)
    //         mx_pop_front(&back_head);

    // mx_printstr("\n\n----------------MX_POP_FRONT-------------------\n");
    //     char *pop_front_str = "HEAD", *pop_front_str1 = "STR1", *pop_front_str2 = "STR2", *pop_front_str3 = "STR3";
    //     t_list *pop_front_new_list = NULL;
    //     mx_push_back(&pop_front_new_list, pop_front_str), mx_push_back(&pop_front_new_list, pop_front_str1), mx_push_back(&pop_front_new_list, pop_front_str2), mx_push_back(&pop_front_new_list, pop_front_str3);
    //     mx_printstr("list before pop_front is | ");
    //     for (int i = 0; pop_front_new_list; i++) {
    //         char *buf = (char *)pop_front_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_front_new_list);
    //     }
    //     mx_printstr("\n");
    //     mx_push_back(&pop_front_new_list, pop_front_str), mx_push_back(&pop_front_new_list, pop_front_str1), mx_push_back(&pop_front_new_list, pop_front_str2), mx_push_back(&pop_front_new_list, pop_front_str3);
    //     mx_printstr("list after pop_front is without \"HEAD\" | ");
    //     mx_pop_front(&pop_front_new_list);
    //     for (int i = 0; pop_front_new_list; i++) {
    //         char *buf = (char *)pop_front_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_front_new_list);
    //     }
    //     mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_POP_BACK-------------------\n");
    //     char *pop_back_str = "HEAD", *pop_back_str1 = "STR1", *pop_back_str2 = "STR2", *pop_back_str3 = "STR3";
    //     t_list *pop_back_new_list = NULL;
    //     mx_push_back(&pop_back_new_list, pop_back_str), mx_push_back(&pop_back_new_list, pop_back_str1), mx_push_back(&pop_back_new_list, pop_back_str2), mx_push_back(&pop_back_new_list, pop_back_str3);
    //     mx_printstr("list before pop_front is | ");
    //     for (int i = 0; pop_back_new_list; i++) {
    //         char *buf = (char *)pop_back_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_back_new_list);
    //     }
    //     mx_printstr("\n");
    //     mx_push_back(&pop_back_new_list, pop_back_str), mx_push_back(&pop_back_new_list, pop_back_str1), mx_push_back(&pop_back_new_list, pop_back_str2), mx_push_back(&pop_back_new_list, pop_back_str3);
    //     mx_printstr("list after pop_front is without \"STR3\" | ");
    //     mx_pop_back(&pop_back_new_list);
    //     for (int i = 0; pop_back_new_list; i++) {
    //         char *buf = (char *)pop_back_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_back_new_list);
    //     }
    //     mx_printstr("\n");


    // mx_printstr("\n\n----------------MX_LIST_SIZE-------------------\n");
    //     char *list_size_str = "HEAD", *list_size_str1 = "STR1", *list_size_str2 = "STR2", *list_size_str3 = "STR3";
    //     t_list *size_new_list = NULL;
    //     mx_push_back(&size_new_list, list_size_str), mx_push_back(&size_new_list, list_size_str1), mx_push_back(&size_new_list, list_size_str2), mx_push_back(&size_new_list, list_size_str3);
    //     int list_size = mx_list_size(size_new_list);
    //     mx_printstr("list size is 4? | "); mx_printint(list_size); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_SORT_LIST-------------------\n");
    //     t_list *sort_new_list = NULL;
    //     mx_push_front(&sort_new_list, (void *) 2);
    //     mx_push_front(&sort_new_list, (void *) 5);
    //     mx_push_front(&sort_new_list, (void *) 3);
    //     mx_push_front(&sort_new_list, (void *) 923);
    //     mx_push_front(&sort_new_list, (void *) 13);
    //     mx_push_front(&sort_new_list, (void *) 4);
    //     mx_push_front(&sort_new_list, (void *) 43);
    //     mx_push_front(&sort_new_list, (void *) 33);
    //     mx_push_front(&sort_new_list, (void *) 1);
    //     mx_printstr("mx_sort_list returns 1 2 3 4 5 13 33 43 923? | ");
    //     mx_sort_list(sort_new_list, cmp_sort_list);
    //     for (int i = 0; sort_new_list; i++) {
    //         int buf = (int)sort_new_list->data;
    //         mx_printint(buf); mx_printstr(" ");
    //         sort_new_list = sort_new_list->next;
    //     }
    //     mx_printstr("\n");



    // system("leaks -q a.out");
}

