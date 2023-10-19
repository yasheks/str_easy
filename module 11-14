string itc_cmp_str(string str1, string str2, int num)
{
    string result;
    for (int i; i < itc_len(str1); i++){
        if (i == num){
            for (int j = 0; j < itc_len(str2); j++)
                result = result + str2[j];
        }

        result = result + str1[i];
    }
    return result;
}

 int itc_find_str(string str1, string str2) {
    int len1 = itc_len(str1);
    int len2 = itc_len(str2);
    int index = -1;

    for (int i = 0; i <= len1; i++) {
        bool match = false;
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                match = true;
                break;
            }
        }
        if (match) {
            index = i;
            break;
        }
    }
    return index;
}
string itc_three_str(string str1, string str2, string str3)
{
    string aaa;
    aaa = "sorry but i`m not understand how doing this function((";
    return aaa;
}
int itc_max_char_on_end(string str) {
    int max_count = 0;
    int temp = 0;

    for (int i = 1; i < itc_len(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            temp++;
        } else {
            if (temp > max_count) {
                max_count = temp;
            }
            temp = 0;
        }
    }

    if (temp > max_count) {
        max_count = temp;
    }

    return max_count;
}
