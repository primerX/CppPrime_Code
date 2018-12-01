#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void remove_author(multimap<string, string> &books, const string &author)
{
	auto pos = books.equal_range(author);	// 查找给定作者返回
	if(pos.first == pos.second){
		cout << "没有" << author << " 这个作者" << endl;
	}else{
		books.erase(pos.first, pos.second);		// 删除该作者所有著作
	}
}

void print_books(multimap<string, string> &books)
{
	cout << "当前书目包括: " << endl;
	for(auto &book : books){
		cout << book.first << ", 《" << book.second << "》 " << endl;
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	multimap<string, string> books;
	books.insert({"Barth, John", "Sot-Weed Factor"});
	books.insert({"Barth, John", "Lost in the Funhouse"});
	books.insert({"金庸", "射雕英雄传"});
	books.insert({"金庸", "天龙八部"});
	print_books(books);
	remove_author(books, "张三");
	remove_author(books, "Barth, John");
	print_books(books);
	return 0;
}