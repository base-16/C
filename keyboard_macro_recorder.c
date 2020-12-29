#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char key[255];
char line[255];

char* get_key(char key_number[256]);
char* return_line(char word[255]);

int main(int argc, char** argv) {
	system("touch /tmp/.log1 && rm /tmp/.log1");
	system("touch /tmp/.log2 && rm /tmp/.log2");
	system("touch /tmp/.file && rm /tmp/.file");
	system("touch /tmp/.out && rm /tmp/.out");
	system("xinput test 10 > /tmp/.log1 & sleep 60 ; kill $!");
	system("grep -rw '/tmp/.log1' -e 'key press' > /tmp/.log2");
	system("xmodmap -pke > /tmp/.file && awk -i inplace NF-- /tmp/.file");
	FILE *f;
	char c;
	int a = 0;
	f = fopen("/tmp/.log2", "r");
	char temp[256] = "";
	FILE *out;
	out = fopen("/tmp/.out", "w");
	while(!feof(f)) {
		c = getc(f);
		a++;
		if(a>=13 && c!=' ' && c!='\n') {
			strncat(temp, &c, 1);
		}
		if(c=='\n') {
			if(strcmp(get_key(temp), "Escape") == 0) {
				fprintf(out, "[Esc]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "1") == 0) {
				fprintf(out, "1");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "2") == 0) {
				fprintf(out, "2");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "3") == 0) {
				fprintf(out, "3");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "4") == 0) {
				fprintf(out, "4");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "5") == 0) {
				fprintf(out, "5");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "6") == 0) {
				fprintf(out, "6");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "7") == 0) {
				fprintf(out, "7");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "8") == 0) {
				fprintf(out, "8");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "9") == 0) {
				fprintf(out, "9");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "0") == 0) {
				fprintf(out, "0");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "asterisk") == 0) {
				fprintf(out, "?");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "minus") == 0) {
				fprintf(out, "-");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "BackSpace") == 0) {
				fprintf(out, "[BackSpace]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Tab") == 0) {
				fprintf(out, "[Tab]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "q") == 0) {
				fprintf(out, "q");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "w") == 0) {
				fprintf(out, "w");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "e") == 0) {
				fprintf(out, "e");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "r") == 0) {
				fprintf(out, "r");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "t") == 0) {
				fprintf(out, "t");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "y") == 0) {
				fprintf(out, "y");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "u") == 0) {
				fprintf(out, "u");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "idotless") == 0) {
				fprintf(out, "ı");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "o") == 0) {
				fprintf(out, "o");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "p") == 0) {
				fprintf(out, "p");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "gbreve") == 0) {
				fprintf(out, "ğ");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "udiaeresis") == 0) {
				fprintf(out, "ü");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Return") == 0) {
				fprintf(out, "\n[Return]\n");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Control_L") == 0) {
				fprintf(out, "[L Ctrl]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "a") == 0) {
				fprintf(out, "a");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "s") == 0) {
				fprintf(out, "s");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "d") == 0) {
				fprintf(out, "d");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "f") == 0) {
				fprintf(out, "f");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "g") == 0) {
				fprintf(out, "g");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "h") == 0) {
				fprintf(out, "h");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "j") == 0) {
				fprintf(out, "j");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "k") == 0) {
				fprintf(out, "k");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "l") == 0) {
				fprintf(out, "l");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "scedilla") == 0) {
				fprintf(out, "ş");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "i") == 0) {
				fprintf(out, "i");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "quotedbl") == 0) {
				fprintf(out, "\"");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Shift_L") == 0) {
				fprintf(out, "[L Shift]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "comma") == 0) {
				fprintf(out, ",");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "z") == 0) {
				fprintf(out, "z");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "x") == 0) {
				fprintf(out, "x");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "c") == 0) {
				fprintf(out, "c");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "v") == 0) {
				fprintf(out, "v");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "b") == 0) {
				fprintf(out, "b");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "n") == 0) {
				fprintf(out, "n");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "m") == 0) {
				fprintf(out, "m");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "odiaeresis") == 0) {
				fprintf(out, "ö");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "period") == 0) {
				fprintf(out, ".");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Shift_R") == 0) {
				fprintf(out, "[R Shift]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Multiply") == 0) {
				fprintf(out, "[Super]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Alt_L") == 0) {
				fprintf(out, "[L Alt]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "space") == 0) {
				fprintf(out, " ");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Caps_Lock") == 0) {
				fprintf(out, "[Caps Lock]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F1") == 0) {
				fprintf(out, "[F1]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F2") == 0) {
				fprintf(out, "[F2]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F3") == 0) {
				fprintf(out, "[F3]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F4") == 0) {
				fprintf(out, "[F4]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F5") == 0) {
				fprintf(out, "[F5]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F6") == 0) {
				fprintf(out, "[F6]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F7") == 0) {
				fprintf(out, "[F7]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F8") == 0) {
				fprintf(out, "[F8]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F9") == 0) {
				fprintf(out, "[F9]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F10") == 0) {
				fprintf(out, "[F10]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Num_Lock") == 0) {
				fprintf(out, "[Num Lock]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Scroll_Lock") == 0) {
				fprintf(out, "[Scroll Lock]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Home") == 0) {
				fprintf(out, "[KP Home]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Up") == 0) {
				fprintf(out, "[KP Up]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Prior") == 0) {
				fprintf(out, "[KP Prior]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Subtract") == 0) {
				fprintf(out, "[KP Subtract]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Left") == 0) {
				fprintf(out, "[KP Left]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Begin") == 0) {
				fprintf(out, "[KP Begin]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Right") == 0) {
				fprintf(out, "[KP Right]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Add") == 0) {
				fprintf(out, "[KP Add]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_End") == 0) {
				fprintf(out, "[KP End]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Down") == 0) {
				fprintf(out, "[KP Down]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Next") == 0) {
				fprintf(out, "[KP Next]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Insert") == 0) {
				fprintf(out, "[KP Insert]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Delete") == 0) {
				fprintf(out, "[KP Delete]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "ISO_Level3_Shift") == 0) {
				fprintf(out, "[ISO Level3 Shift]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "less") == 0) {
				fprintf(out, "<");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F11") == 0) {
				fprintf(out, "[F11]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "F12") == 0) {
				fprintf(out, "[F12]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Katakana") == 0) {
				fprintf(out, "[Katakana]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Hiragana") == 0) {
				fprintf(out, "[Hiragana]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Henkan_Mode") == 0) {
				fprintf(out, "[Henkan_Mode]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Hiragana_Katakana") == 0) {
				fprintf(out, "[Hiragana Katakana]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Muhenkan") == 0) {
				fprintf(out, "[Muhenkan]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Enter") == 0) {
				fprintf(out, "\n[Enter]\n");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Control_R") == 0) {
				fprintf(out, "[R Ctrl]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Divide") == 0) {
				fprintf(out, "/");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Print") == 0) {
				fprintf(out, "[Print Scr]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Linefeed") == 0) {
				fprintf(out, "[LF]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Home") == 0) {
				fprintf(out, "[Home]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Up") == 0) {
				fprintf(out, "[Up]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Prior") == 0) {
				fprintf(out, "[Pg Up]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Left") == 0) {
				fprintf(out, "[Left]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Right") == 0) {
				fprintf(out, "[Right]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "End") == 0) {
				fprintf(out, "[End]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Down") == 0) {
				fprintf(out, "[Down]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Next") == 0) {
				fprintf(out, "[Next]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Insert") == 0) {
				fprintf(out, "[Insert]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Delete") == 0) {
				fprintf(out, "[Delete]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioMute") == 0) {
				fprintf(out, "[XF86AudioMute]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioLowerVolume") == 0) {
				fprintf(out, "[XF86AudioLowerVolume]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioRaiseVolume") == 0) {
				fprintf(out, "[XF86AudioRaiseVolume]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86PowerOff") == 0) {
				fprintf(out, "[XF86PowerOff]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Equal") == 0) {
				fprintf(out, "=");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "plusminus") == 0) {
				fprintf(out, "±");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Pause") == 0) {
				fprintf(out, "[Pause]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86LaunchA") == 0) {
				fprintf(out, "[XF86LaunchA]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Decimal") == 0) {
				fprintf(out, "[KP Decimal]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Hangul") == 0) {
				fprintf(out, "[Hangul]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Hangul_Hanja") == 0) {
				fprintf(out, "[Hangul Hanja]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Super_L") == 0) {
				fprintf(out, "[L Super]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Super_R") == 0) {
				fprintf(out, "[R Super]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Menu") == 0) {
				fprintf(out, "[Menu]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Cancel") == 0) {
				fprintf(out, "[Cancel]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Redo") == 0) {
				fprintf(out, "[Redo]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "SunProps") == 0) {
				fprintf(out, "[SunProps]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Undo") == 0) {
				fprintf(out, "[Undo]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "SunFront") == 0) {
				fprintf(out, "[SunFront]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Copy") == 0) {
				fprintf(out, "[XF86Copy]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Open") == 0) {
				fprintf(out, "[XF86Open]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Paste") == 0) {
				fprintf(out, "[XF86Paste]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Find") == 0) {
				fprintf(out, "[Find]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Cut") == 0) {
				fprintf(out, "[XF86Cut]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Help") == 0) {
				fprintf(out, "[Help]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86MenuKB") == 0) {
				fprintf(out, "[XF86MenuKB]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Calculator") == 0) {
				fprintf(out, "[XF86Calculator]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Sleep") == 0) {
				fprintf(out, "[XF86Sleep]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86WakeUp") == 0) {
				fprintf(out, "[XF86WakeUp]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Explorer") == 0) {
				fprintf(out, "[XF86Explorer]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Send") == 0) {
				fprintf(out, "[XF86Send]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Xfer") == 0) {
				fprintf(out, "[XF86Xfer]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch1") == 0) {
				fprintf(out, "[XF86Launch1]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch2") == 0) {
				fprintf(out, "[XF86Launch2]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86WWW") == 0) {
				fprintf(out, "[XF86WWW]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86DOS") == 0) {
				fprintf(out, "[XF86DOS]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86ScreenSaver") == 0) {
				fprintf(out, "[XF86ScreenSaver]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86RotateWindows") == 0) {
				fprintf(out, "[XF86RotateWindows]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86TaskPane") == 0) {
				fprintf(out, "[XF86TaskPane]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Mail") == 0) {
				fprintf(out, "[XF86Mail]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Favorites") == 0) {
				fprintf(out, "[XF86Favorites]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86MyComputer") == 0) {
				fprintf(out, "[XF86MyComputer]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Back") == 0) {
				fprintf(out, "[XF86Back]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Forward") == 0) {
				fprintf(out, "[XF86Forward]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Eject") == 0) {
				fprintf(out, "[XF86Eject]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioNext") == 0) {
				fprintf(out, "[XF86AudioNext]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioPlay") == 0) {
				fprintf(out, "[XF86AudioPlay]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioPrev") == 0) {
				fprintf(out, "[XF86AudioPrev]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioStop") == 0) {
				fprintf(out, "[XF86AudioStop]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioRecord") == 0) {
				fprintf(out, "[XF86AudioRecord]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioRewind") == 0) {
				fprintf(out, "[XF86AudioRewind]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Phone") == 0) {
				fprintf(out, "[XF86Phone]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Tools") == 0) {
				fprintf(out, "[XF86Tools]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86HomePage") == 0) {
				fprintf(out, "[XF86HomePage]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Reload") == 0) {
				fprintf(out, "[XF86Reload]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Close") == 0) {
				fprintf(out, "[XF86Close]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86ScrollUp") == 0) {
				fprintf(out, "[XF86ScrollUp]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86ScrollDown") == 0) {
				fprintf(out, "[XF86ScrollDown]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "parenleft") == 0) {
				fprintf(out, "[parenleft]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "parenright") == 0) {
				fprintf(out, "[parenright]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86New") == 0) {
				fprintf(out, "[XF86New]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Redo") == 0) {
				fprintf(out, "[Redo]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Tools") == 0) {
				fprintf(out, "[XF86Tools]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch5") == 0) {
				fprintf(out, "[XF86Launch5]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch6") == 0) {
				fprintf(out, "[XF86Launch6]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch7") == 0) {
				fprintf(out, "[XF86Launch7]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch8") == 0) {
				fprintf(out, "[XF86Launch8]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch9") == 0) {
				fprintf(out, "[XF86Launch9]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioMicMute") == 0) {
				fprintf(out, "[XF86AudioMicMute]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86TouchpadToggle") == 0) {
				fprintf(out, "[XF86TouchpadToggle]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86TouchpadOn") == 0) {
				fprintf(out, "[XF86TouchpadOn]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86TouchpadOff") == 0) {
				fprintf(out, "[XF86TouchpadOff]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "Mode_switch") == 0) {
				fprintf(out, "[Mode_switch]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioPlay") == 0) {
				fprintf(out, "[XF86AudioPlay]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioPause") == 0) {
				fprintf(out, "[XF86AudioPause]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch3") == 0) {
				fprintf(out, "[XF86Launch3]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Launch4") == 0) {
				fprintf(out, "[XF86Launch4]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86LaunchB") == 0) {
				fprintf(out, "[XF86LaunchB]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Suspend") == 0) {
				fprintf(out, "[XF86Suspend]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Close") == 0) {
				fprintf(out, "[XF86Close]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioPlay") == 0) {
				fprintf(out, "[XF86AudioPlay]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioForward") == 0) {
				fprintf(out, "[XF86AudioForward]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86WebCam") == 0) {
				fprintf(out, "[XF86WebCam]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioPreset") == 0) {
				fprintf(out, "[XF86AudioPreset]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Mail") == 0) {
				fprintf(out, "[XF86Mail]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Messenger") == 0) {
				fprintf(out, "[XF86Messenger]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Search") == 0) {
				fprintf(out, "[XF86Search]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Go") == 0) {
				fprintf(out, "[XF86Go]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Finance") == 0) {
				fprintf(out, "[XF86Finance]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Game") == 0) {
				fprintf(out, "[XF86Game]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Shop") == 0) {
				fprintf(out, "[XF86Shop]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86MonBrightnessDown") == 0) {
				fprintf(out, "[XF86MonBrightnessDown]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86MonBrightnessUp") == 0) {
				fprintf(out, "[XF86MonBrightnessUp]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86AudioMedia") == 0) {
				fprintf(out, "[XF86AudioMedia]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Display") == 0) {
				fprintf(out, "[XF86Display]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86KbdLightOnOff") == 0) {
				fprintf(out, "[XF86KbdLightOnOff]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86KbdBrightnessDown") == 0) {
				fprintf(out, "[XF86KbdBrightnessDown]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86KbdBrightnessUp") == 0) {
				fprintf(out, "[XF86KbdBrightnessUp]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Send") == 0) {
				fprintf(out, "[XF86Send]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Reply") == 0) {
				fprintf(out, "[XF86Reply]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86MailForward") == 0) {
				fprintf(out, "[XF86MailForward]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Save") == 0) {
				fprintf(out, "[XF86Save]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Documents") == 0) {
				fprintf(out, "[XF86Documents]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Battery") == 0) {
				fprintf(out, "[XF86Battery]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86Bluetooth") == 0) {
				fprintf(out, "[XF86Bluetooth]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86WLAN") == 0) {
				fprintf(out, "[XF86WLAN]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86MonBrightnessCycle") == 0) {
				fprintf(out, "[XF86MonBrightnessCycle]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86WWAN") == 0) {
				fprintf(out, "[XF86WWAN]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "XF86RFKill") == 0) {
				fprintf(out, "[XF86RFKill]");
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			else if(strcmp(get_key(temp), "KP_Next") == 0) {
				int ij = 0;
				while(temp[ij]!=0) {
					temp[ij] = 0;
					ij++;
				}
			}
			strcpy(temp, "");
			a = 0;
		}
	}
	fclose(f);
	fclose(out);
	//char key_number[256] = "23";
	//printf("%s\n", get_key(key_number));
	//get_key(key_number);
	return 0;
}

char* get_key(char key_number[256]) {
	int d = 0;
	while(key[d]!=0) {
		key[d] = 0;
		d++;
	}
	int number_line;
	char word[255] = "keycode ";
	strcat(word, key_number);
	//printf("%s\n", word);
	char line[255] = "";
	strcpy(line, return_line(word));
	//printf("%i\n", return_line_number(word));
	//printf("%s", line);
	int a = 0, b = 0;
	while(line[a]!='=') {
		//printf("%c", line[a]);
		a++;
	}
	a += 2;
	//printf("\n");
	while(line[a]!=' ') {
		key[b] = line[a];
		a++;
		b++;
	}
	//printf("%s\n", key);
	return key;
}

char* return_line(char word[255]) {
	int i = 0;
	char c;
	FILE *fp = fopen("/tmp/.file", "r") ;
	while (fgets(line, sizeof(line), fp ) != NULL) {
		if (strstr(line, word ) != NULL) {
			fclose(fp);
			return line;
		}
	}
}
