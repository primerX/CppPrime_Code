// 满足提议的程序入下所示
class X;		// 声明类型 X
class Y			// 定义类型 Y
{
	X *x;
};
class X 		// 定义类型 X
{
	Y y;
}


// 下面的写法将会引发编译器报错
class Y;
class X
{
	Y y;		// 视试图在类 X 中创建不完全类型 Y
}
class Y
{
	X *x;
}