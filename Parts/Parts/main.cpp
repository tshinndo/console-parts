#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std;

char* urls[] = {
	"http://www.digikey.jp/product-search/ja?keywords=",
	"http://www.mouser.jp/Search/Refine.aspx?Keyword=",
	"http://jp.rs-online.com/web/c/?searchTerm=",
	"http://www.chip1stop.com/search.do?keyword="
};

int main(int argc, char* argv[]) {
	int l = sizeof(urls) / sizeof(urls[0]);
	string url;
	for (int i = 0; i < l; i++) {
		url = urls[i];
		if (argc >= 2) {
			url += argv[1];
		}
		
		HINSTANCE ret = ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOW);
	}
}