#include<iostream>
#include<string>
#include <vector>  
#include <fstream>
#include<math.h>
using namespace std;
void twogetmap(int two[2][2])//2變數的輸出
{
	
	cout << "=====Kmap=====" << endl;
	cout << "  \\ A|       |" << endl;
	cout << " B \\ |  0  1 |" << endl;
	cout << "-----+---+---+\n";
	cout << "  0  | "; if (two[0][0] == 4) { cout << 'x'; }
	else { cout << two[0][0]; }; cout << " | "; if (two[0][1] == 4) { cout << 'x'; }
	else { cout << two[0][1]; }cout << " | " << endl;
	cout << "-----+---+---+\n";
	cout << "  1  | "; if (two[1][0] == 4) { cout << 'x'; }
	else { cout << two[1][0]; }cout << " | "; if (two[1][1] == 4) { cout << 'x'; }
	else {
		cout << two[1][1];
	}cout << " | " << endl;
	cout << "-----+---+---+\n";
}
void threegetmap(int three[2][4])//3變數的輸出
{
	cout << "=========Kmap=========" << endl;
	cout << "  \\AB|               |" << endl;
	cout << " C \\ | 00  01  11  10|" << endl;
	cout << "-----+---+---+---+---+\n";
	cout << " 0   |"; if (three[0][0] == 8) { cout << 'x'; }
	else { cout << three[0][0]; } cout << "  | "; if (three[0][1] == 8) { cout << 'x'; }
	else { cout << three[0][1]; } cout << " | "; if (three[0][2] == 8) { cout << 'x'; }
	else {
		cout << three[0][2];
	} cout << " | "; if (three[0][3] == 8) { cout << 'x'; }
		else {
			cout << three[0][3];
		} cout<< " | " << endl;

	cout << "-----+---+---+---+---+\n";
	cout << " 1   |"; if (three[1][0] == 8) { cout << 'x'; }
	else { cout << three[1][0]; }cout << "  | "; if (three[1][1] == 8) { cout << 'x'; }
	else { cout << three[1][1]; } cout << " | "; if (three[1][2] == 8) { cout << 'x'; }
	else { cout << three[1][2]; }  cout << " | ";  if (three[1][3] == 8) { cout << 'x'; }
	else { cout << three[1][3]; } cout<< " | " << endl;
	cout << "-----+---+---+---+---+\n";
}

void fourgetmap(int four[4][4])//四變數的輸出
{
	cout << "=========Kmap=========" << endl;
	cout << "  \\AB|               |" << endl;
	cout << "CD \\ | 00  01  11  10|" << endl;
	cout << "-----+---+---+---+---+\n";
	cout << " 00  | "; if (four[0][0] == 16) { cout << 'x'; }
	else { cout << four[0][0]; } cout << " | "; if (four[0][1] == 16) { cout << 'x'; }
	else { cout << four[0][1]; }cout << " | ";  if (four[0][2] == 16) { cout << 'x'; }
	else {
		cout << four[0][2];
	} cout << " | "; if (four[0][3] == 16) { cout << 'x'; }
	else {
		cout << four[0][3];
	} cout<< " |" << endl;
	cout << "-----+---+---+---+---+\n";
	cout << " 01  | "; if (four[1][0] == 16) { cout << 'x'; }
	else { cout << four[1][0]; } cout << " | "; if (four[1][1] == 16) { cout << 'x'; }
	else { cout << four[1][1]; }cout << " | "; if (four[1][2] == 16) { cout << 'x'; }
	else { cout << four[1][2]; }cout << " | "; if (four[1][3] == 16) { cout << 'x'; }
	else {
		cout << four[1][3];
	} cout<< " |" << endl;
	cout << "-----+---+---+---+---+\n";
	cout << " 11  | ";  if (four[2][0] == 16) { cout << 'x'; }
	else { cout << four[2][0]; } cout << " | "; if (four[2][1] == 16) { cout << 'x'; }
	else { cout << four[2][1]; }cout << " | "; if (four[2][2] == 16) { cout << 'x'; }
	else { cout << four[2][2]; }cout << " | "; if (four[2][3] == 16) { cout << 'x'; }
	else {
		cout << four[2][3];
	} cout<< " |" << endl;
	cout << "-----+---+---+---+---+\n";
	cout << " 10  | "; if (four[3][0] == 16) { cout << 'x'; }
	else { cout << four[3][0]; } cout << " | "; if (four[3][1] == 16) { cout << 'x'; }
	else { cout << four[3][1]; }cout << " | "; if (four[3][2] == 16) { cout << 'x'; }
	else { cout << four[3][2]; }cout << " | "; if (four[3][3] == 16) { cout << 'x'; }
	else { cout << four[3][3]; } cout<< " |" << endl;
	cout << "-----+---+---+---+---+\n";



}
void twoterm(int two[2][2])//處理二變數
{
	int sum = 0;
	int count[2][2] = { { 0,0 },{ 0,0 } };//存 圈到幾次
	int casetwo[4] = { 0,0,0,0 }; //圈兩個的
	for (int i = 0; i <2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if ((two[i][j] == 1) || two[i][j] == 4)//我把dont care設4
			{
				sum++;
			}
		}
	}
	ofstream outfile("output.txt", ios::out);
	if (!outfile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	outfile << "=====Kmap=====" << endl;
	outfile << "  \\ A|       |" << endl;
	outfile << " B \\ |  0  1 |" << endl;
	outfile << "-----+---+---+\n";
	outfile << "  0  | "; if (two[0][0] == 4) { outfile << 'x'; }
	else { outfile << two[0][0]; }; outfile << " | "; if (two[0][1] == 4) { outfile << 'x'; }
	else { outfile << two[0][1]; }outfile << " | " << endl;
	outfile << "-----+---+---+\n";
	outfile << "  1  | "; if (two[1][0] == 4) { outfile << 'x'; }
	else { outfile << two[1][0]; }outfile << " | "; if (two[1][1] == 4) { outfile << 'x'; }
	else {
		outfile << two[1][1];
	}outfile << " | " << endl;
	outfile << "-----+---+---+\n";


	//如果全部都是1或dontcare，則直接output 1
	if (sum == 4)
	{
		outfile << endl;
		outfile << "F(A,B)=1" << endl;
	}
	else
	{
		//橫的兩個相連
		if ((two[0][0] == 1 || two[0][0] == 4) && (two[0][1] == 1 || two[0][1] == 4))//上
		{
			count[0][0]++; count[0][1]++;
			casetwo[0]++;
		}
		if ((two[1][0] == 1 || two[1][0] == 4) && (two[1][1] == 1 || two[1][1] == 4))//下
		{
			count[1][0]++; count[1][1]++;
			casetwo[1]++;
		}
		//直的兩個相連
		if ((two[0][0] == 1 || two[0][0] == 4) && (two[1][0] == 1 || two[1][0] == 4))//左
		{
			count[0][0]++; count[1][0]++;
			casetwo[2]++;
		}
		if ((two[0][1] == 1 || two[0][1] == 4) && (two[1][1] == 1 || two[1][1] == 4))//右
		{
			count[0][1]++; count[1][1]++;
			casetwo[3]++;
		}
		
		outfile << endl;
		outfile << "prime implicant :";
		for (int i = 0; i < 3; i++)
		{
			if (casetwo[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "b',";
					break;
				case 1:
					outfile << "b,"; break;
				case 2:
					outfile << "a',"; break;
				case 3:
					outfile << "a,"; break;

				}
			}
		}
		if ((two[0][0] == 1) && (casetwo[0] == 0) && (casetwo[2] == 0))//只圈到一次且只有自己
		{
			outfile << "a'b',";
		}


		if ((two[0][1] == 1) && (casetwo[0] == 0) && (casetwo[3] == 0))//只圈到一次且只有自己
		{
			outfile << "ab',";
		}


		if ((two[1][0] == 1) && casetwo[1] == 0 && casetwo[2] == 0)//只圈到一次且只有自己
		{
			outfile << "a'b,";
		}
		if ((two[1][1] == 1)&& casetwo[3] == 0 && casetwo[1] == 0)//只圈到一次且只有自己
		{
			outfile << "ab";
		}
		
		outfile << endl;
		outfile << "essential prime implicant :";

		for (int i = 0; i < 3; i++)
		{
			if (casetwo[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "b',";
					break;
				case 1:
					outfile << "b,"; break;
				case 2:
					outfile << "a',"; break;
				case 3:
					outfile << "a,"; break;

				}
			}
		}
		if ((two[0][0] == 1) && (casetwo[0] == 0) && (casetwo[2] == 0))//只圈到一次且只有自己
		{
			outfile << "a'b',";
		}


		if ((two[0][1] == 1) && (casetwo[0] == 0) && (casetwo[3] == 0))//只圈到一次且只有自己
		{
			outfile << "ab',";
		}


		if ((two[1][0] == 1) && casetwo[1] == 0 && casetwo[2] == 0)//只圈到一次且只有自己
		{
			outfile << "a'b,";
		}
		if ((two[1][1] == 1) && casetwo[3] == 0 && casetwo[1] == 0)//只圈到一次且只有自己
		{
			outfile << "ab";
		}
		outfile << endl;
		outfile << "F(A,B):";

		for (int i = 0; i < 3; i++)
		{
			if (casetwo[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "b'+";
					break;
				case 1:
					outfile << "b+"; break;
				case 2:
					outfile << "a'+"; break;
				case 3:
					outfile << "a+"; break;

				}
			}
		}
		if ((two[0][0] == 1) && (casetwo[0] == 0) && (casetwo[2] == 0))//只圈到一次且只有自己
		{
			outfile << "a'b'+";
		}


		if ((two[0][1] == 1) && (casetwo[0] == 0) && (casetwo[3] == 0))//只圈到一次且只有自己
		{
			outfile << "ab'+";
		}


		if ((two[1][0] == 1) && casetwo[1] == 0 && casetwo[2] == 0)//只圈到一次且只有自己
		{
			outfile << "a'b+";
		}
		if ((two[1][1] == 1) && casetwo[3] == 0 && casetwo[1] == 0)//只圈到一次且只有自己
		{
			outfile << "ab";
		}
	}

}

void threeterm(int three[2][4])
{

	int sum = 0;
	int count[2][4] = { { 0,0,0,0 },{ 0,0,0,0 } };//存圈到幾次，essential要用的
	int casefour_rod[2] = { 0,0 }; //圈四個的bar
	int casefour_square[4] = { 0 };//圈四個的井字
	int casetwo_ho[8] = { 0 };//圈兩個的 水平
	int casetwo_ver[4] = { 0 };//圈兩個的 垂直
	for (int i = 0; i <2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if ((three[i][j] == 1) || three[i][j] == 8)//我把dont care設8
			{
				sum++;
			}
		}
	}
	//如果全部都是1或dontcare，則直接output 1
	if (sum == 8)
	{
		cout << endl;
		cout << "F(A,B,c)=1" << endl;
	}
	else
	{
		for (int i = 0; i < 2; i++)//上下兩個長條
		{
			if ((three[i][0] == 1 || three[i][0] == 8) && (three[i][1] == 1 || three[i][1] == 8) &&
				(three[i][2] == 1 || three[i][2] == 8) && (three[i][3] == 1 || three[i][3] == 8))
			{
				casefour_rod[i] = 1;
				count[i][0]++; count[i][1]++; count[i][2]++; count[i][3]++;
			}
		}
		for (int i = 0; i < 3; i++)//田型四格
		{
			if ((three[0][i] == 1 || three[0][i] == 8) && (three[0][i + 1] == 1 || three[0][i + 1] == 8) &&
				(three[1][i] == 1 || three[1][i] == 8) && (three[1][i + 1] == 1 || three[1][i + 1] == 8))
			{
				casefour_square[i] = 1;
				count[0][i]++; count[0][i + 1]++; count[1][i]++; count[1][i + 1]++;
			}
		}

		if ((three[0][0] == 1 || three[0][0] == 8) && (three[0][3] == 1 || three[0][3] == 8) &&
			(three[1][0] == 1 || three[1][0] == 8) && (three[1][3] == 1 || three[1][3] == 8))
		{
			casefour_square[3] = 1;
			count[0][0]++; count[0][3]++; count[1][0]++; count[1][3]++;
		}


		//-------兩格(左右)共8個
		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if ((three[i][j] == 1 ||three[i][j]==8)&&( three[i][j + 1] == 1||three[i][j+1]==8) && casefour_square[j] != 1 && casefour_rod[i] != 1)
				{
					casetwo_ho[j]++; count[i][j]++; count[i][j + 1]++;
				}
			}
		}
		if ((three[0][0] == 1 ||three[0][0]==8)&& (three[0][3] == 1||three[0][3]==8) && casefour_square[3] != 1 &&casefour_rod[0]!=1)
		{
			casetwo_ho[3]++; count[0][0]++; count[0][3]++;

		}


		for (int i = 1; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if ((three[i][j] == 1||three[i][j]==8) && (three[i][j + 1] == 1||three[i][j+1]==8 )&& casefour_square[j] != 1 && casefour_rod[i] != 1)
				{
					casetwo_ho[j + 4]++; count[i][j]++; count[i][j + 1]++;
				}
			}
		}
		if ((three[1][0] == 1||three[1][0]==8 )&& (three[1][3] == 1||three[1][3]==8) && casefour_square[3] != 1&&casefour_rod[1]!=1)
		{
			casetwo_ho[7]++; count[0][0]++; count[0][3]++;

		}

		//兩格 上下的

		
			

				if ((three[0][0] == 1||three[0][0]==8) && (three[1][0] == 1||three[1][0]==8) && casefour_square[0] != 1 &&casefour_square[3]!=1)
				{
					casetwo_ver[0]++; count[0][0]++; count[1][0]++;
				}
				if ((three[0][1] == 1 || three[0][1] == 8) && (three[1][1] == 1 || three[1][1] == 8) && casefour_square[0] != 1 &&casefour_square[1]!=1)
				{
					casetwo_ver[1]++; count[0][1]++; count[1][1]++;
				}
				if ((three[0][2] == 1 || three[0][2] == 8) && (three[1][2] == 1 || three[1][2] == 8) && casefour_square[1] != 1&&casefour_square[2]!=1)
				{
					casetwo_ver[2]++; count[0][2]++; count[1][2]++;
				}
			
			if ((three[0][3] == 1 ||three[0][3]==8)&& (three[1][3] == 1||three[1][3]==8) && casefour_square[3] != 1 &&casefour_square[2]!=1)
			{
				casetwo_ver[3]++; count[0][3]++; count[1][3]++;
			}
			//輸出圖
			ofstream outfile("output.txt", ios::out);


			outfile << "=========Kmap=========" << endl;
			outfile << "  \\AB|               |" << endl;
			outfile << " C \\ | 00  01  11  10|" << endl;
			outfile << "-----+---+---+---+---+\n";
			outfile << " 0   |"; if (three[0][0] == 8) { outfile << 'x'; }
			else { outfile << three[0][0]; } outfile << "  | "; if (three[0][1] == 8) { outfile << 'x'; }
			else { outfile << three[0][1]; } outfile << " | "; if (three[0][2] == 8) { outfile << 'x'; }
			else {
				outfile << three[0][2];
			} outfile << " | "; if (three[0][3] == 8) { outfile << 'x'; }
			else {
				outfile << three[0][3];
			} outfile << " | " << endl;

			outfile << "-----+---+---+---+---+\n";
			outfile << " 1   |"; if (three[1][0] == 8) { outfile << 'x'; }
			else { outfile << three[1][0]; }outfile << "  | "; if (three[1][1] == 8) { outfile << 'x'; }
			else { outfile << three[1][1]; } outfile << " | "; if (three[1][2] == 8) { outfile << 'x'; }
			else { outfile << three[1][2]; }  outfile << " | ";  if (three[1][3] == 8) { outfile << 'x'; }
			else { outfile << three[1][3]; } outfile << " | " << endl;
			outfile << "-----+---+---+---+---+\n";




			outfile << endl;
			outfile << "prime implicant :";
		//OUTPUT 圈四個的PRIME
		for (int i = 0; i < 2; i++)
		{
			if (casefour_rod[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "c',";
					break;
				case 1:
					outfile << "c,";
					break;


				}
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (casefour_square[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "a',";
					break;
				case 1:
					outfile << "b,";
					break;
				case 2:
					outfile << "a,";
					break;
				case 3:
					outfile << "b',";
					break;



				}
			}


		}
		//output 圈兩個的prime
		for (int j = 0; j < 8; j++)
		{

			if (casetwo_ho[j] == 1)
			{
				switch (j)
				{
				case 0:
					outfile << "a'c',";
					break;
				case 1:
					outfile << "bc',";
					break;
				case 2:
					outfile << "ac',";
					break;
				case 3:
					outfile << "b'c',";
					break;
				case 4:
					outfile << "a'c,";
					break;
				case 5:
					outfile << "bc,";
					break;
				case 6:
					outfile << "ac,";
					break;

				case 7:

					outfile << "b'c,";


				}

			}

		}

		
		for (int j = 0; j < 4; j++)
		{
			if (casetwo_ver[j] == 1)
			{
				switch (j)
				{
				case 0:
					outfile << "a'b',";
					break;
				case 1:
					outfile << "a'b,";
					break;
				case 2:
					outfile << "ab,";
					break;
				case 3:
					outfile << "ab'";
					break;
				}
			}
		}
	
				if (three[0][0] == 1 &&casefour_rod[0]==0&&casefour_square[0]==0&&casefour_square[3]==0&&casetwo_ho[0]==0&&casetwo_ver[0]==0&&casetwo_ho[3]==0)
				{
					outfile << "a'b'c'";
				}
				if (three[0][1] == 1 && casefour_rod[0] == 0 && casefour_square[0] == 0 &&casefour_square[1]==0&& casetwo_ho[0] == 0 && casetwo_ver[1]==0 && casetwo_ho[1] == 0)
				{
					outfile << "a'b c'";
				}
				if (three[0][2] == 1 && casefour_rod[0] == 0 && casefour_square[1] == 0 && casefour_square[2] == 0 && casetwo_ho[1] == 0 && casetwo_ver[2]==0 && casetwo_ho[2] == 0)
				{
					outfile << "a b c'";
				}
				if (three[0][3] == 1 && casefour_rod[0] == 0 && casefour_square[2] == 0 && casefour_square[3] == 0 && casetwo_ho[2] == 0 && casetwo_ver[3]==0 && casetwo_ho[3] == 0)
				{
					outfile << "a b'c'";
				}
				if (three[1][0] == 1 && casefour_rod[1] == 0 && casefour_square[0] == 0 && casefour_square[3] == 0 && casetwo_ho[4] == 0 && casetwo_ver[0]==0 && casetwo_ho[7] == 0)
				{
					outfile << "a b'c'";
				}
				if (three[1][1] == 1 && casefour_rod[1] == 0 && casefour_square[0] == 0 && casefour_square[1] == 0 && casetwo_ho[4] == 0 && casetwo_ver[1]==0 && casetwo_ho[5] == 0)
				{
					outfile << "a'b c'";
				}

				if (three[1][2] == 1 && casefour_rod[1] == 0 && casefour_square[1] == 0 && casefour_square[2] == 0 && casetwo_ho[5] == 0 && casetwo_ver[2]==0 && casetwo_ho[6] == 0)
				{
					outfile << "a b c ";
				}
				if (three[1][3] == 1 && casefour_rod[1] == 0 && casefour_square[2] == 0 && casefour_square[3] == 0 && casetwo_ho[6] == 0 && casetwo_ver[3]==0 && casetwo_ho[7] == 0)
				{
					outfile << "a b'c";
				}






				outfile << endl;
				outfile << "essential prime implicant :";           //3變數的prime implicant 跟essential一樣，Output同上
		//OUTPUT 圈四個的PRIME
		for (int i = 0; i < 2; i++)
		{
			if (casefour_rod[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "c',";
					break;
				case 1:
					outfile << "c,";
					break;


				}
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (casefour_square[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "a',";
					break;
				case 1:
					outfile << "b,";
					break;
				case 2:
					outfile << "a,";
					break;
				case 3:
					outfile << "b',";
					break;



				}
			}


		}
		//output 圈兩個的prime
		for (int j = 0; j < 8; j++)
		{

			if (casetwo_ho[j] == 1)
			{
				switch (j)
				{
				case 0:
					outfile << "a'c',";
					break;
				case 1:
					outfile << "bc',";
					break;
				case 2:
					outfile << "ac',";
					break;
				case 3:
					outfile << "b'c',";
					break;
				case 4:
					outfile << "a'c,";
					break;
				case 5:
					outfile << "bc,";
					break;
				case 6:
					outfile << "ac,";
					break;

				case 7:

					outfile << "b'c,";


				}

			}

		}


		for (int j = 0; j < 4; j++)
		{
			if (casetwo_ver[j] == 1)
			{
				switch (j)
				{
				case 0:
					outfile << "a'b',";
					break;
				case 1:
					outfile << "a'b,";
					break;
				case 2:
					outfile << "ab,";
					break;
				case 3:
					outfile << "ab'";
					break;
				}
			}
		}
		if (three[0][0] == 1 && casefour_rod[0] == 0 && casefour_square[0] == 0 && casefour_square[3] == 0 && casetwo_ho[0] == 0 && casetwo_ver[0] == 0 && casetwo_ho[3] == 0)
		{
			outfile << "a'b'c'";
		}
		if (three[0][1] == 1 && casefour_rod[0] == 0 && casefour_square[0] == 0 && casefour_square[1] == 0 && casetwo_ho[0] == 0 && casetwo_ver[1] == 0 && casetwo_ho[1] == 0)
		{
			outfile << "a'b c'";
		}
		if (three[0][2] == 1 && casefour_rod[0] == 0 && casefour_square[1] == 0 && casefour_square[2] == 0 && casetwo_ho[1] == 0 && casetwo_ver[2] == 0 && casetwo_ho[2] == 0)
		{
			outfile << "a b c'";
		}
		if (three[0][3] == 1 && casefour_rod[0] == 0 && casefour_square[2] == 0 && casefour_square[3] == 0 && casetwo_ho[2] == 0 && casetwo_ver[3] == 0 && casetwo_ho[3] == 0)
		{
			outfile << "a b'c'";
		}
		if (three[1][0] == 1 && casefour_rod[1] == 0 && casefour_square[0] == 0 && casefour_square[3] == 0 && casetwo_ho[4] == 0 && casetwo_ver[0] == 0 && casetwo_ho[7] == 0)
		{
			outfile << "a b'c'";
		}
		if (three[1][1] == 1 && casefour_rod[1] == 0 && casefour_square[0] == 0 && casefour_square[1] == 0 && casetwo_ho[4] == 0 && casetwo_ver[1] == 0 && casetwo_ho[5] == 0)
		{
			outfile << "a'b c'";
		}

		if (three[1][2] == 1 && casefour_rod[1] == 0 && casefour_square[1] == 0 && casefour_square[2] == 0 && casetwo_ho[5] == 0 && casetwo_ver[2] == 0 && casetwo_ho[6] == 0)
		{
			outfile << "a b c ";
		}
		if (three[1][3] == 1 && casefour_rod[1] == 0 && casefour_square[2] == 0 && casefour_square[3] == 0 && casetwo_ho[6] == 0 && casetwo_ver[3] == 0 && casetwo_ho[7] == 0)
		{
			outfile << "a b'c";
		}
		outfile << endl;
		outfile << "F(A,B,C)=";
		for (int i = 0; i < 2; i++)
		{
			if (casefour_rod[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "c'+";
					break;
				case 1:
					outfile << "c+";
					break;


				}
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (casefour_square[i] == 1)
			{
				switch (i)
				{
				case 0:
					outfile << "a'+";
					break;
				case 1:
					outfile << "b+";
					break;
				case 2:
					outfile << "a+";
					break;
				case 3:
					outfile << "b'+";
					break;



				}
			}


		}
		//output 圈兩個的prime
		for (int j = 0; j < 8; j++)
		{

			if (casetwo_ho[j] == 1)
			{
				switch (j)
				{
				case 0:
					outfile << "a'c'+";
					break;
				case 1:
					outfile << "bc'+";
					break;
				case 2:
					outfile << "ac'+";
					break;
				case 3:
					outfile << "b'c'+";
					break;
				case 4:
					outfile << "a'c+";
					break;
				case 5:
					outfile << "bc+";
					break;
				case 6:
					outfile << "ac+";
					break;

				case 7:

					outfile << "b'c+";


				}

			}

		}


		for (int j = 0; j < 4; j++)
		{
			if (casetwo_ver[j] == 1)
			{
				switch (j)
				{
				case 0:
					outfile << "a'b'+";
					break;
				case 1:
					outfile << "a'b+";
					break;
				case 2:
					outfile << "ab+";
					break;
				case 3:
					outfile << "ab'+";
					break;
				}
			}
		}
		if (three[0][0] == 1 && casefour_rod[0] == 0 && casefour_square[0] == 0 && casefour_square[3] == 0 && casetwo_ho[0] == 0 && casetwo_ver[0] == 0 && casetwo_ho[3] == 0)
		{
			outfile << "a'b'c'+";
		}
		if (three[0][1] == 1 && casefour_rod[0] == 0 && casefour_square[0] == 0 && casefour_square[1] == 0 && casetwo_ho[0] == 0 && casetwo_ver[1] == 0 && casetwo_ho[1] == 0)
		{
			outfile << "a'b c'+";
		}
		if (three[0][2] == 1 && casefour_rod[0] == 0 && casefour_square[1] == 0 && casefour_square[2] == 0 && casetwo_ho[1] == 0 && casetwo_ver[2] == 0 && casetwo_ho[2] == 0)
		{
			outfile << "a b c'+";
		}
		if (three[0][3] == 1 && casefour_rod[0] == 0 && casefour_square[2] == 0 && casefour_square[3] == 0 && casetwo_ho[2] == 0 && casetwo_ver[3] == 0 && casetwo_ho[3] == 0)
		{
			outfile << "a b'c'+";
		}
		if (three[1][0] == 1 && casefour_rod[1] == 0 && casefour_square[0] == 0 && casefour_square[3] == 0 && casetwo_ho[4] == 0 && casetwo_ver[0] == 0 && casetwo_ho[7] == 0)
		{
			outfile << "a b'c'+";
		}
		if (three[1][1] == 1 && casefour_rod[1] == 0 && casefour_square[0] == 0 && casefour_square[1] == 0 && casetwo_ho[4] == 0 && casetwo_ver[1] == 0 && casetwo_ho[5] == 0)
		{
			outfile << "a'b c'+";
		}

		if (three[1][2] == 1 && casefour_rod[1] == 0 && casefour_square[1] == 0 && casefour_square[2] == 0 && casetwo_ho[5] == 0 && casetwo_ver[2] == 0 && casetwo_ho[6] == 0)
		{
			outfile << "a b c+ ";
		}
		if (three[1][3] == 1 && casefour_rod[1] == 0 && casefour_square[2] == 0 && casefour_square[3] == 0 && casetwo_ho[6] == 0 && casetwo_ver[3] == 0 && casetwo_ho[7] == 0)
		{
			outfile << "a b'c";
		}

	}

}







void fourterm(int four[4][4])
{
	int sum = 0;
	int count[4][4] = { { 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 } };
	int caseeight[8] = { 0,0,0,0,0,0,0,0 };
	int casefour_bar[8] = { 0,0,0,0,0,0,0,0 };
	int casetwo[32] = {0};
	int casefour_square[16] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (four[i][j] == 1)
			{
				sum++;
			}
		}
	}
	if (sum == 16)
	{
		cout << "F(A,B,C)=1";
	}
	else   //橫條 長條 (1*4)
	{
		for (int i = 0; i<4; i++)
		{
			if ((four[i][0] == 1 || four[i][0] == 16) && (four[i][1] == 1 || four[i][1] == 16) &&
				(four[i][2] == 1 || four[i][2] == 16) && (four[i][3] == 1 || four[i][3] == 16))
			{
				casefour_bar[i] = 1;
				count[i][0]++; count[i][1]++; count[i][2]++; count[i][3]++;
			}
			if ((four[0][i] == 1 || four[0][i] == 16) && (four[1][i] == 1 || four[1][i] == 16) &&
				(four[2][i] == 1 || four[2][i] == 16) && (four[3][i] == 1 || four[3][i] == 16))
			{
				casefour_bar[i + 4] = 1;
				count[0][i]++; count[1][i]++; count[2][i]++; count[3][i]++;
			}
		}
		//8 case prime implicant
		for (int i = 0; i<4; i++)
		{
			//horizontal
			if (casefour_bar[i] == 1 && casefour_bar[(i + 1 == 4) ? 0 : i + 1] == 1)
			{
				caseeight[i] = 1;
				casefour_bar[i]--; casefour_bar[(i + 1 == 4 ? 0 : i + 1)]--;
				
			}
			//vertical
			if (casefour_bar[i + 4] == 1 && casefour_bar[(i + 5 == 8) ? 4 : i + 5] == 1)
			{
				caseeight[i + 4] = 1;
				casefour_bar[i + 4]--; casefour_bar[(i + 5 == 8 ? 4 : i + 5)]--;
				
			}
		}

		//square
		int k = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (caseeight[j]!=1&&(four[i][j] == 1 || four[i][j] == 16) && (four[i][j + 1] == 1 || four[i][j + 1] == 16) && (four[i + 1][j] == 1 || four[i + 1][j] == 16) && (four[i + 1][j + 1] == 1 || four[i + 1][j + 1] == 16))
				{
					casefour_square[k]= 1;
					count[i][j]++;
					count[i][j + 1]++;
					count[i + 1][j]++;
					count[i + 1][j + 1];
				}
				k++;
			}
		}
		if ((four[0][0] == 1 || four[0][0] == 16) && (four[0][3] == 1 || four[0][3] == 16) && (four[1][3] == 1 || four[1][3] == 16) && (four[1][0] == 1 || four[1][0] == 16))
		{
		
			casefour_square[9] = 1; count[0][0]++; count[0][3]++; count[1][3]++; count[1][0];
		
		}
		if ((four[1][0] == 1 || four[1][0] == 16) && (four[1][3] == 1 || four[1][3] == 16) && (four[2][3] == 1 || four[2][3] == 16) && (four[2][0] == 1 || four[2][0] == 16))
		{

			casefour_square[10] = 1; count[1][0]++; count[1][3]++; count[2][3]++; count[2][0]++;

		}
		if ((four[2][0] == 1 || four[2][0] == 16) && (four[2][3] == 1 || four[2][3] == 16) && (four[3][3] == 1 || four[3][3] == 16) && (four[3][0] == 1 || four[3][0] == 16))
		{

			casefour_square[11] = 1; count[2][0]++; count[2][3]++; count[3][3]++; count[3][0]++;

		}
		
	
	if (caseeight[4]!=1&&(four[0][0] == 1 || four[0][0] == 16) && (four[0][1] == 1 || four[0][1] == 16) && (four[3][0] == 1 || four[3][0] == 16) && (four[3][1] == 1 || four[3][1] == 16))
	{

		casefour_square[12] = 1; count[0][0]++; count[0][1]; count[3][0]++; count[3][1]++;

	}
	if (caseeight[5] != 1 && (four[0][1] == 1 || four[0][1] == 16) && (four[0][2] == 1 || four[0][2] == 16) && (four[3][1] == 1 || four[3][1] == 16) && (four[3][2] == 1 || four[3][2] == 16))
	{

		casefour_square[13] = 1; count[0][1]++; count[0][2]++; count[3][1]++; count[3][2]++;

	}
	if (caseeight[6] != 1 && (four[0][2] == 1 || four[0][2] == 16) && (four[0][3] == 1 || four[0][3] == 16) && (four[3][2] == 1 || four[3][2] == 16) && (four[3][3] == 1 || four[3][3] == 16))
	{

		casefour_square[14] = 1; count[0][2]++; count[0][3]++; count[3][2]++; count[3][3]++;

	}
	if (caseeight[7] != 1 && (four[0][0] == 1 || four[0][0] == 16) && (four[3][0] == 1 || four[3][0] == 16) && (four[3][3] == 1 || four[3][3] == 16) && (four[0][3] == 1 || four[0][3] == 16))
	{

		casefour_square[15] = 1; count[0][0]++; count[3][0]++; count[3][3]++; count[0][3]++;

	}
	
			if (caseeight[4]!=1&&casefour_square[0] != 1 && casefour_square[12]!=1&&casefour_bar[0] != 1&&(four[0][0]==1||four[0][0]==16)&&(four[0][1]==1||four[0][1]==16)&&caseeight[0]!=1&&caseeight[3]!=1)
			{
				casetwo[0]++; count[0][0]++; count[0][1]++;
				
			}
			if (caseeight[5] != 1 && casefour_square[1] != 1 && casefour_square[13] != 1 && casefour_bar[0] != 1 && (four[0][1] == 1||four[0][1]==16) && (four[0][2] == 1||four[0][2]==16) && caseeight[0] != 1 && caseeight[3] != 1)
			{
				casetwo[1]++; count[0][1]++; count[0][2]++;

			}
			if (caseeight[6] != 1 && casefour_square[2] != 1 && casefour_square[14] != 1 && casefour_bar[0] != 1 &&( four[0][2] == 1||four[0][2]==16) && (four[0][3] == 1||four[0][3]==16) && caseeight[0] != 1 && caseeight[3] != 1)
			{
				casetwo[2]++; count[0][3]++; count[0][2]++;

			}
			if (caseeight[4] != 1 && casefour_square[0] != 1 && casefour_square[3] != 1 && casefour_bar[1] != 1 && (four[1][0] == 1||four[1][0]==16) && (four[1][1] == 1||four[1][1]==16) && caseeight[0] != 1 && caseeight[1] != 1)
			{
				casetwo[3]++;
				count[1][0]++;
				count[1][1]++;

			}
			if (caseeight[5] != 1 && casefour_square[1] != 1 && casefour_square[4] != 1 && casefour_bar[1] != 1 &&( four[1][1] == 1||four[1][1]==16) && (four[1][2] == 1||four[1][2]==16) && caseeight[0] != 1 && caseeight[1] != 1)
			{
				casetwo[4]++;
				count[1][1]++;
				count[1][2]++;

			}
			if (caseeight[6] != 1 && casefour_square[2] != 1 && casefour_square[5] != 1 && casefour_bar[1] != 1 && (four[1][2] == 1||four[1][2]==16) && (four[1][3] == 1 ||four[1][3]==16)&& caseeight[0] != 1 && caseeight[1] != 1)
			{
				casetwo[5]++;
				count[1][2]++;
				count[1][3]++;
			}
			if (caseeight[4] != 1 && casefour_square[3] != 1 && casefour_square[6] != 1 && casefour_bar[2] != 1 &&( four[2][0] == 1 ||four[2][0]==16)&& (four[2][1] == 1||four[2][1]==16) && caseeight[1] != 1 && caseeight[2] != 1)
			{
				casetwo[6]++;
				count[2][0]++;
				count[2][1]++;

			}
			if (caseeight[5] != 1 && casefour_square[4] != 1 && casefour_square[7] != 1 && casefour_bar[2] != 1 &&( four[2][1] == 1||four[2][1]==16) &&( four[2][2] == 1||four[2][2]==16) && caseeight[1] != 1 && caseeight[2] != 1)
			{
				casetwo[7]++;
				count[2][1]++;
				count[2][2]++;
			}
			if (caseeight[6] != 1 && casefour_square[5] != 1 && casefour_square[8] != 1 && casefour_bar[2] != 1 && (four[2][2] == 1||four[2][2]==16) && (four[2][3] == 1||four[2][3]==16) && caseeight[1] != 1 && caseeight[2] != 1)
			{
				casetwo[8]++;
				count[2][2]++;
				count[2][3]++;

			}

			if (caseeight[4] != 1 && casefour_square[6] != 1 && casefour_square[12] != 1 && casefour_bar[3] != 1 &&( four[3][0] == 1 ||four[3][0]==16)&&( four[3][1] == 1||four[3][1]==16) && caseeight[2] != 1 && caseeight[3] != 1)
			{
				casetwo[9]++;
				count[3][0]++;
				count[3][1]++;

			}
			if (caseeight[5] != 1 && casefour_square[7] != 1 && casefour_square[13] != 1 && casefour_bar[3] != 1 &&( four[3][1] == 1 ||four[3][1]==16)&& (four[3][2] == 1||four[3][2]==16) && caseeight[2] != 1 && caseeight[3] != 1)
			{
				casetwo[10]++;
				count[3][1]++;
				count[3][2]++;

			}
			if (caseeight[6] != 1 && casefour_square[8] != 1 && casefour_square[14] != 1 && casefour_bar[3] != 1 && (four[3][2] == 1||four[3][2]==16) &&( four[3][3] == 1||four[3][3]==16) && caseeight[2] != 1 && caseeight[3] != 1)
			{
				casetwo[11]++;
				count[3][2]++;
				count[3][3]++;
			}


			if (caseeight[7] != 1 && casefour_square[11] != 1 && casefour_square[9] != 1 && casefour_bar[0] != 1 &&( four[0][0] == 1||four[0][0]==16) &&( four[0][3] == 1||four[0][3]==16) && caseeight[0] != 1 && caseeight[3] != 1)
			{
				casetwo[12]++;
				count[0][0]++;
				count[0][3]++;

			}
			if (caseeight[7] != 1&&casefour_square[10] != 1 && casefour_square[9] != 1 && casefour_bar[1] != 1 &&( four[1][0] == 1||four[1][0]==16) &&( four[1][3] == 1||four[1][3]==16) && caseeight[0] != 1 && caseeight[1] != 1)
			{
				casetwo[13]++;
				count[1][0]++;
				count[1][3]++;
			}
			if (caseeight[7] != 1&&casefour_square[11] != 1 && casefour_square[10] != 1 && casefour_bar[2] != 1 && (four[2][0] == 1||four[2][0]==16) &&( four[2][3] == 1||four[2][3]==16) && caseeight[1] != 1 && caseeight[2] != 1)
			{
				casetwo[14]++;
				count[2][0]++;
				count[2][3]++;

			}
			if (caseeight[7] != 1 && casefour_square[11] != 1 && casefour_square[15]!=1 && casefour_bar[3] != 1 && (four[3][0] == 1||four[3][0]==16) &&( four[3][3] == 1||four[3][3]==16) && caseeight[2] != 1 && caseeight[3] != 1)
			{
				casetwo[15]++;
				count[3][0]++;
				count[3][3]++;

			}
			if (caseeight[4] != 1 && caseeight[7] != 1  && casefour_bar[4]!=1&&casefour_square[0] != 1 && casefour_square[9]!=1 &&  (four[0][0] == 1 ||four[0][0]==16)&& (four[1][0] == 1||four[1][0]==16) && caseeight[0] != 1 )
			{
				casetwo[16]++;
				count[0][0]++;
				count[1][0]++;

			}

			if (caseeight[4] != 1 && caseeight[5] != 1 && casefour_bar[5] != 1&&casefour_square[0] != 1 && casefour_square[1]!=1 && (four[0][1] == 1||four[0][1]==16) &&( four[1][1] == 1||four[1][1]==16) && caseeight[0] != 1)
			{
				casetwo[17]++;
				count[0][1]++;
				count[1][1]++;

			}
			if (caseeight[5] != 1 && caseeight[6] != 1 &&casefour_bar[6] != 1&&casefour_square[1] != 1 && casefour_square[2] != 1 && (four[0][2] == 1 ||four[0][2]==16)&&( four[1][2] == 1||four[1][2]==16) && caseeight[0] != 1)
			{
				casetwo[18]++;
				count[0][2]++;
				count[1][2]++;

			}
			if (caseeight[6] != 1 && caseeight[7] != 1 && casefour_bar[7] != 1&&casefour_square[2] != 1 && casefour_square[9] != 1 && (four[0][3] == 1||four[0][3]==16) && (four[1][3] == 1||four[1][3]==16) && caseeight[0] != 1)
			{
				casetwo[19]++;
				count[0][3]++;
				count[1][3]++;
			}
			if (caseeight[4] != 1 && caseeight[7] != 1 && casefour_bar[4] != 1&&casefour_square[3] != 1 && casefour_square[10] != 1 &&( four[1][0] == 1||four[1][0]==16) && (four[2][0] == 1||four[2][0]==16) && caseeight[1] != 1)
			{
				casetwo[20]++;
				count[1][0]++;
				count[2][0]++;

			}
			if (caseeight[4] != 1 && caseeight[5] != 1 && casefour_bar[5] != 1&&casefour_square[3] != 1 && casefour_square[4] != 1 &&( four[1][1] == 1||four[1][1]==16) && (four[2][1] == 1||four[2][1]==16) && caseeight[1] != 1)
			{
				casetwo[21]++;
				count[1][1]++;
				count[2][1]++;
			}
			if (caseeight[5] != 1 && caseeight[6] != 1 && casefour_bar[6] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && (four[1][2] == 1||four[1][2]==16) && (four[2][2] == 1||four[2][2]==16) && caseeight[1] != 1)
			{
				casetwo[22]++;
				count[1][2]++;
				count[2][2]++;

			}
			if (caseeight[6] != 1 && caseeight[7] != 1 && casefour_bar[7] != 1 && casefour_square[5] != 1 && casefour_square[10] != 1 && (four[1][3] == 1||four[1][3]==16) && (four[2][3] == 1||four[2][3]==16) && caseeight[1] != 1)
			{
				casetwo[23]++;
				count[1][3]++;
				count[2][3]++;
			}
			if (caseeight[4] != 1 && caseeight[7] != 1 && casefour_bar[4] != 1 && casefour_square[6] != 1 && casefour_square[11] != 1 && (four[2][0] == 1||four[2][0]==16) && (four[3][0] == 1||four[3][0]==16) && caseeight[2] != 1)
			{
				casetwo[24]++;
				count[2][0]++;
				count[3][0]++;

			}
			if (caseeight[4] != 1 && caseeight[5] != 1 && casefour_bar[5] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && (four[2][1] == 1||four[2][1]==16) &&( four[3][1] == 1||four[3][1]==16) && caseeight[2] != 1)
			{
				casetwo[25]++;
				count[2][1]++;
				count[3][1]++;
			}
			if (caseeight[5] != 1 && caseeight[6] != 1 && casefour_bar[6] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && (four[2][2] == 1 ||four[2][2]==16)&& (four[3][2] == 1||four[3][2]==16) && caseeight[2] != 1)
			{
				casetwo[26]++;
				count[2][2]++;
				count[3][2]++;
			}
			if (caseeight[6] != 1 && caseeight[7] != 1 && casefour_bar[7] != 1 && casefour_square[8] != 1 && casefour_square[11] != 1 && (four[2][3] == 1||four[2][3]==16) && (four[3][3] == 1 ||four[3][3]==16)&& caseeight[2] != 1)
			{
				casetwo[27]++;
				count[2][3]++;
				count[3][3]++;
			}
			if (caseeight[4] != 1 && caseeight[7] != 1 && casefour_bar[4] != 1 && (four[0][0] == 1||four[0][0]==16 )&& (four[3][0] == 1||four[3][0]==16) && casefour_square[12] != 1 && casefour_square[15] != 1 && caseeight[3] != 1)
			{
				casetwo[28]++;
				count[3][0]++;
				count[0][0]++;
			}
			if (caseeight[4] != 1 && caseeight[5] != 1 && casefour_bar[5] != 1 && (four[0][1] == 1 ||four[0][1]==16)&& (four[3][1] == 1||four[3][1]==16) && casefour_square[12] != 1 && casefour_square[13] != 1 && caseeight[3] != 1)
			{
				casetwo[29]++;
				count[0][1]++;
				count[3][1]++;
			}
			if (caseeight[5] != 1 && caseeight[6] != 1 && casefour_bar[6] != 1 && (four[0][2] == 1||four[0][2]==16 )&&( four[3][2] == 1||four[3][2]==16) && casefour_square[13] != 1 && casefour_square[14] != 1 && caseeight[3] != 1)
			{
				casetwo[30]++;
				count[0][2]++;
				count[3][2]++;
			}
			if (caseeight[6] != 1 && caseeight[7] != 1 && casefour_bar[7] != 1 && (four[0][3] == 1||four[0][3]==16) && (four[3][3] == 1||four[3][3]==16) && casefour_square[15] != 1 && casefour_square[14] != 1 && caseeight[3] != 1)
			{
				casetwo[31]++;
				count[0][3]++;
				count[3][3]++;
			}
			
	//輸出圖
			ofstream outfile("output.txt", ios::out);
			if (!outfile) {
				cerr << "Failed opening" << endl;
				exit(1);
			}
			outfile << "=========Kmap=========" << endl;
			outfile << "  \\AB|               |" << endl;
			outfile << "CD \\ | 00  01  11  10|" << endl;
			outfile << "-----+---+---+---+---+\n";
			outfile << " 00  | "; if (four[0][0] == 16) { outfile << 'x'; }
			else { outfile << four[0][0]; } outfile << " | "; if (four[0][1] == 16) { outfile << 'x'; }
			else { outfile << four[0][1]; }outfile << " | ";  if (four[0][2] == 16) { outfile << 'x'; }
			else {
				outfile << four[0][2];
			} outfile << " | "; if (four[0][3] == 16) { outfile << 'x'; }
			else {
				outfile << four[0][3];
			} outfile << " |" << endl;
			outfile << "-----+---+---+---+---+\n";
			outfile << " 01  | "; if (four[1][0] == 16) { outfile << 'x'; }
			else { outfile << four[1][0]; } outfile << " | "; if (four[1][1] == 16) { outfile << 'x'; }
			else { outfile << four[1][1]; }outfile << " | "; if (four[1][2] == 16) { outfile << 'x'; }
			else { outfile << four[1][2]; }outfile << " | "; if (four[1][3] == 16) { outfile << 'x'; }
			else {
				outfile << four[1][3];
			} outfile << " |" << endl;
			outfile << "-----+---+---+---+---+\n";
			outfile << " 11  | ";  if (four[2][0] == 16) { outfile << 'x'; }
			else { outfile << four[2][0]; } outfile << " | "; if (four[2][1] == 16) { outfile << 'x'; }
			else { outfile << four[2][1]; }outfile << " | "; if (four[2][2] == 16) { outfile << 'x'; }
			else { outfile << four[2][2]; }outfile << " | "; if (four[2][3] == 16) { outfile << 'x'; }
			else {
				outfile << four[2][3];
			} outfile << " |" << endl;
			outfile << "-----+---+---+---+---+\n";
			outfile << " 10  | "; if (four[3][0] == 16) { outfile << 'x'; }
			else { outfile << four[3][0]; } outfile << " | "; if (four[3][1] == 16) { outfile << 'x'; }
			else { outfile << four[3][1]; }outfile << " | "; if (four[3][2] == 16) { outfile << 'x'; }
			else { outfile << four[3][2]; }outfile << " | "; if (four[3][3] == 16) { outfile << 'x'; }
			else { outfile << four[3][3]; } outfile << " |" << endl;
			outfile << "-----+---+---+---+---+\n";
			//輸出prime implicant
			outfile << "prime implicant:";
			for (int i = 0; i < 4; i++)
			{
				if (caseeight[i]==1)
				{
					switch (i)
					{
					case 0:
						outfile << "c', ";
						break;
					case 1:
						outfile << "d,";
						break;
					case 2:
						outfile << "c,";
						break;
					case 3:
						outfile << "d',";
						break;
					}
				}
			
			
			
			}
			for (int i = 0; i < 8; i++)
			{
				if (casefour_bar[i] == 1)
				{
					switch (i)
					{
					case 0:
						outfile << "c'd',";
						break;
					case 1:
						outfile << "c'd,";
						break;
					case 2:
						outfile << "cd,";
							break;
					case 3:
						outfile << "cd',";
						break;
					case 4:
						outfile << "a'b',";
						break;
					case 5:
						outfile << "a'b,";
						break;
					case 6:
						outfile << "ab,";
						break;
					case 7:
						outfile << "ab',";
						break;



					}
				}
			}
			for (int i = 0; i < 16; i++)
			{
				if (casefour_square[i] == 1)
				{

					switch (i)
					{
					case 0:
						outfile << "a'c',";
						break;
					case 1:
						outfile << "bc',";
						break;
					case 2:
						outfile << "ac',";
						break;
					case 3:
						outfile << "a'd,";
						break;
					case 4:
						outfile << "bd,";
						break;
					case 5:
						outfile << "ad,";
						break;
					case 6:
						outfile << "a'c,";
						break;
					case 7:
						outfile << "bc,";
					case 8:
						outfile << "ac,";
						break;
					case 9:
						outfile << "b'c',";
						break;
					case 10:
						outfile << "b'd,";
						break;
					case 11:
						outfile << "b'c,";
						break;
					case 12:
						outfile << "a'd',";
						break;
					case 13:
						outfile << "bd',";
						break;
					case 14:
						outfile << "ad',";
						break;
					case 15:
						outfile << "b'd',";
						break;


					}

				}





			}

			for (int i = 0; i < 32; i++)
			{
				if (casetwo[i] == 1)
				{
					switch (i)
					{
					case 0:
						outfile << "a'c'd',";
						break;
					case 1:
						outfile << "bc'd',";
						break;
					case 2:
						outfile << "ac'd',";
						break;
					case 3:
						outfile << "a'c'd,";
						break;
					case 4:
						outfile << "bc'd,";
						break;
					case 5:
						outfile << "ac'd,";
						break;
					case 6:
						outfile << "a'cd,";
						break;
					case 7:
						outfile << "bcd,";
						break;
					case 8:
						outfile << "acd,";
						break;
					case 9:
						outfile << "a'cd',";
						break;
					case 10:
						outfile << "bcd',";
						break;
					case 11:
						outfile << "acd',";
						break;
					case 12:
						outfile << "b'c'd',";
						break;
					case 13:
						outfile << "b'c'd,";
						break;
					case 14:
						outfile << "b'cd,";
						break;
					case 15:
						outfile << "b'cd',";
						break;
					case 16:
						outfile << "a'b'c',";
						break;
					case 17:
						outfile << "a'bc',";
						break;
					case 18:
						outfile << "abc',";
						break;
					case 19:
						outfile << "ab'c',";
						break;
					case 20:
						outfile << "a'b'd,";
						break;
					case 21:
						outfile << "a'bd,";
						break;
					case 22:
						outfile << "abd,";
						break;
					case 23:
						outfile << "ab'd,";
						break;
					case 24:
						outfile << "a'b'c,";
						break;
					case 25:
						outfile << "a'bc,";
						break;
					case 26:
						outfile << "abc,";
						break;
					case 27:
						outfile << "ab'c,";
						break;
					case 28:
						outfile << "a'b'd',";
						break;
					case 29:
						outfile << "a'bd',";
						break;
					case 30:
						outfile << "abd',";
						break;
					case 31:
						outfile << "ab'd',";
						break;



					}
				}
			}

			if (casefour_bar[4]!=1&& four[0][0] == 1 && casetwo[0] != 1 && casetwo[12] != 1 && casetwo[16] != 1 && casetwo[28] != 1 && casefour_bar[0] != 1 && casefour_square[0] != 1 && casefour_square[9] != 1 && casefour_square[15] != 1 && casefour_square[12] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b'c'd',";
			}
			if (casefour_bar[5] != 1&&four[0][1] == 1 && casetwo[0] != 1 && casetwo[1] != 1 && casetwo[17] != 1 && casetwo[29] != 1 && casefour_bar[0] != 1 && casefour_square[12] != 1 && casefour_square[13] != 1&&casefour_square[1]!=1 && casefour_square[0] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b c'd',";
			}
			if (casefour_bar[6] != 1 && four[0][2] == 1 && casetwo[1] != 1 && casetwo[2] != 1 && casetwo[30] != 1 && casetwo[18] != 1 && casefour_bar[0] != 1 && casefour_square[13] != 1 && casefour_square[14] != 1 && casefour_square[1] != 1 && casefour_square[2] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "abc'd',";
			}
			if (casefour_bar[7] != 1 && four[0][3] == 1 && casetwo[2] != 1 && casetwo[12] != 1 && casetwo[31] != 1 && casetwo[19] != 1 && casefour_bar[0] != 1 && casefour_square[9] != 1 && casefour_square[15] != 1 && casefour_square[14] != 1 && casefour_square[2] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "ab'c'd',";
			}

			if (casefour_bar[4] != 1 && four[1][0] == 1 && casetwo[3] != 1 && casetwo[13] != 1 && casetwo[16] != 1 && casetwo[20] != 1 && casefour_bar[1] != 1 && casefour_square[0] != 1 && casefour_square[3] != 1 && casefour_square[9] != 1 && casefour_square[10] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "a'b'c'd,";
			}
			if (casefour_bar[5] != 1 && four[1][1] == 1 && casetwo[3] != 1 && casetwo[4] != 1 && casetwo[17] != 1 && casetwo[21] != 1 && casefour_bar[1] != 1 && casefour_square[0] != 1 && casefour_square[1] != 1 && casefour_square[3] != 1 && casefour_square[4] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "a'bc'd,";
			}
			if (casefour_bar[6] != 1 && four[1][2] == 1 && casetwo[4] != 1 && casetwo[5] != 1 && casetwo[18] != 1 && casetwo[22] != 1 && casefour_bar[1] != 1 && casefour_square[1] != 1 && casefour_square[2] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "abc'd,";
			}
			if (casefour_bar[7] != 1 && four[1][3] == 1 && casetwo[5] != 1 && casetwo[13] != 1 && casetwo[19] != 1 && casetwo[23] != 1 && casefour_bar[1] != 1 && casefour_square[10] != 1 && casefour_square[2] != 1 && casefour_square[5] != 1 && casefour_square[9] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "ab'c'd,";
			}


			if (casefour_bar[4] != 1 && four[2][0] == 1 && casetwo[6] != 1 && casetwo[14] != 1 && casetwo[20] != 1 && casetwo[24] != 1 && casefour_bar[2] != 1 && casefour_square[3] != 1 && casefour_square[6] != 1 && casefour_square[10] != 1 && casefour_square[11] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "a'b'cd,";
			}
			if (casefour_bar[5] != 1 && four[2][1] == 1 && casetwo[6] != 1 && casetwo[7] != 1 && casetwo[21] != 1 && casetwo[25] != 1 && casefour_bar[2] != 1 && casefour_square[3] != 1 && casefour_square[4] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "a'bcd,";
			}
			if (casefour_bar[6] != 1 && four[2][2] == 1 && casetwo[7] != 1 && casetwo[8] != 1 && casetwo[22] != 1 && casetwo[26] != 1 && casefour_bar[2] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "abcd,";
			}
			if (casefour_bar[7] != 1 && four[2][3] == 1 && casetwo[8] != 1 && casetwo[14] != 1 && casetwo[23] != 1 && casetwo[27] != 1 && casefour_bar[2] != 1 && casefour_square[8] != 1 && casefour_square[5] != 1 && casefour_square[10] != 1 && casefour_square[11] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "ab'cd,";
			}


			if (casefour_bar[4] != 1 && four[3][0] == 1 && casetwo[9] != 1 && casetwo[15] != 1 && casetwo[24] != 1 && casetwo[28] != 1 && casefour_bar[3] != 1 && casefour_square[11] != 1 && casefour_square[6] != 1 && casefour_square[12] != 1 && casefour_square[15] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b'cd',";
			}

			if (casefour_bar[5] != 1 && four[3][1] == 1 && casetwo[9] != 1 && casetwo[10] != 1 && casetwo[25] != 1 && casetwo[29] != 1 && casefour_bar[3] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && casefour_square[12] != 1 && casefour_square[13] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "a'bcd',";
			}

			if (casefour_bar[6] != 1 && four[3][2] == 1 && casetwo[10] != 1 && casetwo[11] != 1 && casetwo[26] != 1 && casetwo[30] != 1 && casefour_bar[3] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && casefour_square[13] != 1 && casefour_square[14] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "abcd',";
			}

			if (casefour_bar[7] != 1 && four[3][3] == 1 && casetwo[11] != 1 && casetwo[15] != 1 && casetwo[22] != 1 && casetwo[31] != 1 && casefour_bar[3] != 1 && casefour_square[8] != 1 && casefour_square[15] != 1 && casefour_square[11] != 1 && casefour_square[14] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "ab'cd',";
			}


			//輸出essential 
			outfile << endl;
			outfile << "essential prime implicant:";
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (count[i][j] == 1)
					{
						if (caseeight[i] == 1)
						{
							switch (i)
							{
							case 0:
								outfile << "c', ";
								break;
							case 1:
								outfile << "d,";
								break;
							case 2:
								outfile << "c,";
								break;
							case 3:
								outfile << "d',";
								break;
							}

						}
						if (caseeight[((i== 0) ? 3 : i - 1)] == 1)
						{

							switch(i-1)
							{
							case 0:
								outfile << "c', ";
								break;
							case 1:
								outfile << "d,";
								break;
							case 2:
								outfile << "c,";
								break;
							case 3:
								outfile << "d',";
								break;
							}

						}
						
						if (caseeight[i + 4] == 1)
						{
							switch (i + 4)
							{
							case 4:
								outfile << "a'b',";
								break;
							case 5:
								outfile << "a'b,";
								break;
							case 6:
								outfile << "ab,";
								break;
							case 7:
								outfile << "ab',";
								break;
							}
						}
						else if (casefour_bar[i] == 1)
						{

							switch (i)
							{
							case 0:
								outfile << "c'd',";
								break;
							case 1:
								outfile << "c'd,";
								break;
							case 2:
								outfile << "cd,";
								break;
							case 3:
								outfile << "cd',";
								break;


							}
						}
						

					}
				}
			}
			for (int j = 0; j < 4; j++)
			{
				if (count[0][j] == 1)
				{
				if (casefour_bar[j + 4] == 1)
				{
					switch (j + 4)
					{


					case 4:
						outfile << "a'b',";
						break;
					case 5:
						outfile << "a'b,";
						break;
					case 6:
						outfile << "ab,";
						break;
					case 7:
						outfile << "ab',";
						break;





					}

				}
				}
			}
			//00
			if (count[0][0] == 1)
			{
				if (casefour_square[0] == 1 )
				{
					outfile << "a'c',";

				}
				if (casefour_square[9] == 1)
				{
					outfile << "b'c',";
				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd',";
				}
				if (casefour_square[12] == 1)
				{
					outfile << "a'd',";
				}
				
			}

			//03
			if (   count[0][3]==1)
			{
				if (casefour_square[2] == 1)
				{
					outfile << "ac',";
				}
				if (casefour_square[9] == 1)
				{
						
					outfile << "b'c',";
							
				}
				if (casefour_square[14] == 1)
				{
					outfile << "ad',";
				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd',";
				}
			}
			//30
			if (count[3][0] == 1)
			{
				if (casefour_square[6] == 1)
				{
					outfile << "a'c,";
				}
				if (casefour_square[12] == 1)
				{

					outfile << "a'd',";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c,";
				
				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd',";
				}
			}
			//33
			if (count[3][3] == 1)
			{
				if (casefour_square[14] == 1)
				{
					outfile << "ad',";
				}
				if (casefour_square[8] == 1)
				{

					outfile << "ac,";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c,";

				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd',";
				}
			}
			//10
			if (count[1][0] == 1)
			{
				if (casefour_square[0] == 1)
				{
					outfile << "a'c',";
				}
				if (casefour_square[3] == 1)
				{

					outfile << "a'd,";

				}
				if (casefour_square[9] == 1)
				{
					outfile << "b'c',";

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd,";
				}
			}
             //13
			if (count[1][3] == 1)
			{
				if (casefour_square[2] == 1)
				{
					outfile << "ac',";
				}
				if (casefour_square[5] == 1)
				{

					outfile << "ad,";

				}
				if (casefour_square[9] == 1)
				{
					outfile << "b'c',";

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd,";
				}
			}
			//20
			if (count[2][0] == 1)
			{
				if (casefour_square[3] == 1)
				{
					outfile << "a'd,";
				}
				if (casefour_square[6] == 1)
				{
					outfile << "a'c,";
					

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd,";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c,";
				}
			}
			//23
			if (count[2][3] == 1)
			{
				if (casefour_square[5] == 1)
				{
					outfile << "ad,";
				}
				if (casefour_square[8] == 1)
				{
				
					outfile << "ac,";

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd,";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c,";
				}
			}

			for (int i=0;i<4;i++)
			{
				for (int j=1;j<3;j++) 
				{
					if (count[i][j] == 0)
					{
						//01
						if (casefour_square[j - 1] == 1  )
						{
							switch (j - 1)
							{
							case 0:
								outfile << "a'c',";
								break;
							case 1:
								outfile << "bc',";
								break;
							case 2:
								outfile << "ac',";
								break;
							}
						}
						if (casefour_square[j] == 1)
						{
							switch (j)
							{
						
							case 1:
								outfile << "bc',";
								break;
							case 2:
								outfile << "ac',";
								break;
							case 3:
								outfile << "a'd,";
								break;
							}
						}
						if (casefour_square[j + 11] == 1)
						{
							switch (j+11)
							{
							case 12:
								outfile << "a'd',";
								break;
							case 13:
								outfile << "bd',";
								break;
							case 14:
								outfile << "ad',";
								break;
							}
						}
						if (casefour_square[j + 12] == 1)
						{
							switch (j + 12)
							{
							case 13:
								outfile << "bd',";
								break;
							case 14:
								outfile << "ad',";
								break;
							case 15:
								outfile << "b'd',";
								break;
							}
						}
							
					}
				}
			}
			if (count[0][0] == 1)
			{
				if (casetwo[0] == 1)
				{
					outfile << "a'c'd',";
				}
				if (casetwo[16] == 1)
				{
					outfile << "a'b'c',";
				}
				if (casetwo[12] == 1)
				{
					outfile << "b'c'd',";
				}
				if (casetwo[28] == 1)
				{
					outfile << "a'b'd',";
				}
			}
			if (count[0][1] == 1)
			{
				if (casetwo[0] == 1)
				{
					outfile << "a'c'd',";
				}
				if (casetwo[1] == 1)
				{
					outfile << "bc'd',";
				}
				if (casetwo[29]==1)
				{
					outfile << "a'bd',";
				}
				if (casetwo[17]==1)
				{
					outfile << "a'bc',";
				}
			}
			if (count[0][2] == 1)
			{
				if (casetwo[1] == 1)
				{
					outfile << "bc'd',";
				}
				if (casetwo[2] == 1)
				{
					outfile << "ac'd',";
				}
				if (casetwo[30] == 1)
				{
					outfile << "abd',";
				}
				if (casetwo[18] == 1)
				{
					outfile << "abc',";
				}
			}
			if (count[0][3] == 1)
			{
				if (casetwo[2] == 1)
				{
					outfile << "ac'd',";
				}
				if (casetwo[3] == 1)
				{
					outfile << "a'c'd,";
				}
				if (casetwo[31] == 1)
				{
					outfile << "ab'd',";
				}
				if (casetwo[19] == 1)
				{
					outfile << "ab'c',";
				}
			}
			if (count[1][0] == 1)
			{
				if (casetwo[3] == 1)
				{
					outfile << "a'c'd,";
				}
				if (casetwo[13] == 1)
				{
					outfile << "b'c'd,";
				}
				if (casetwo[16] == 1)
				{
					outfile << "a'b'c',";
				}
				if (casetwo[20] == 1)
				{
					outfile << "a'b'd,";
				}
			}
			if (count[1][1] == 1)
			{
				if (casetwo[3] == 1)
				{
					outfile << "a'c'd,";
				}
				if (casetwo[4] == 1)
				{
					outfile << "bc'd,";
				}
				if (casetwo[17] == 1)
				{
					outfile << "a'bc',";
				}
				if (casetwo[21] == 1)
				{
					outfile << "a'bd,";
				}
			}
			if (count[1][2] == 1)
			{
				if (casetwo[4] == 1)
				{
					outfile << "bc'd,";
				}
				if (casetwo[5] == 1)
				{
					outfile << "ac'd,";
				}
				if (casetwo[18] == 1)
				{
					outfile << "abc',";
				}
				if (casetwo[22] == 1)
				{
					outfile << "abd,";
				}
			}
			if (count[1][3] == 1)
			{
				if (casetwo[5] == 1)
				{
					outfile << "ac'd";
				}
				if (casetwo[13] == 1)
				{
					outfile << "b'c'd,";
				}
				if (casetwo[19] == 1)
				{
					outfile << "ab'c',";
				}
				if (casetwo[23] == 1)
				{
					outfile << "ab'd,";
				}
			}
			if (count[2][0] == 1)
			{
				if (casetwo[6] == 1)
				{
					outfile << "a'cd,";
				}
				if (casetwo[14] == 1)
				{
					outfile << "b'cd,";
				}
				if (casetwo[20] == 1)
				{
					outfile << "a'b'd,";
				}
				if (casetwo[24] == 1)
				{
					outfile << "a'b'c,";
				}
			}
			if (count[2][1] == 1)
			{
				if (casetwo[6] == 1)
				{
					outfile << "a'cd,";
				}
				if (casetwo[7] == 1)
				{
					outfile << "bcd,";
				}
				if (casetwo[21] == 1)
				{
					outfile << "a'bd,";
				}
				if (casetwo[25] == 1)
				{
					outfile << "a'bc,";
				}
			}
			if (count[2][2] == 1)
			{
				if (casetwo[7] == 1)
				{
					outfile << "bcd,";
				}
				if (casetwo[8] == 1)
				{
					outfile << "acd,";
				}
				if (casetwo[22] == 1)
				{
					outfile << "abd,";
				}
				if (casetwo[26] == 1)
				{
					outfile << "abc,";
				}
			}
			if (count[2][3] == 1)
			{
				if (casetwo[8] == 1)
				{
					outfile << "acd,";
				}
				if (casetwo[14] == 1)
				{
					outfile << "b'cd,";
				}
				if (casetwo[23] == 1)
				{
					outfile << "ab'd,";
				}
				if (casetwo[27] == 1)
				{
					outfile << "ab'c,";
				}
			}
			if (count[3][0] == 1)
			{
				if (casetwo[9] == 1)
				{
					outfile << "a'cd',";
				}
				if (casetwo[15] == 1)
				{
					outfile << "b'cd',";
				}
				if (casetwo[28] == 1)
				{
					outfile << "a'b'd',";
				}
				if (casetwo[24] == 1)
				{
					outfile << "a'b'c,";
				}
			}
			if (count[3][1] == 1)
			{
				if (casetwo[10] == 1)
				{
					outfile << "bcd',";
				}
				if (casetwo[9] == 1)
				{
					outfile << "a'cd',";
				}
				if (casetwo[29] == 1)
				{
					outfile << "a'bd',";
				}
				if (casetwo[25] == 1)
				{
					outfile << "a'bc,";
				}
			}
			if (count[3][2] == 1)
			{
				if (casetwo[10] == 1)
				{
					outfile << "bcd',";
				}
				if (casetwo[11] == 1)
				{
					outfile << "acd',";
				}
				if (casetwo[30] == 1)
				{
					outfile << "abd',";
				}
				if (casetwo[26] == 1)
				{
					outfile << "abc,";
				}
			}
			if (count[3][3] == 1)
			{
				if (casetwo[15] == 1)
				{
					outfile << "b'cd',";
				}
				if (casetwo[11] == 1)
				{
					outfile << "acd',";
				}
				if (casetwo[31] == 1)
				{
					outfile << "ab'd',";
				}
				if (casetwo[27] == 1)
				{
					outfile << "ab'c,";
				}
			}

			if (count[0][0]==1&&casefour_bar[4] != 1 && four[0][0] == 1 && casetwo[0] != 1 && casetwo[12] != 1 && casetwo[16] != 1 && casetwo[28] != 1 && casefour_bar[0] != 1 && casefour_square[0] != 1 && casefour_square[9] != 1 && casefour_square[15] != 1 && casefour_square[12] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b'c'd',";
			}
			if (count[0][1] == 1&&casefour_bar[5] != 1 && four[0][1] == 1 && casetwo[0] != 1 && casetwo[1] != 1 && casetwo[17] != 1 && casetwo[29] != 1 && casefour_bar[0] != 1 && casefour_square[12] != 1 && casefour_square[13] != 1 && casefour_square[1] != 1 && casefour_square[0] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b c'd',";
			}
			if (count[0][2] == 1 && casefour_bar[6] != 1 && four[0][2] == 1 && casetwo[1] != 1 && casetwo[2] != 1 && casetwo[30] != 1 && casetwo[18] != 1 && casefour_bar[0] != 1 && casefour_square[13] != 1 && casefour_square[14] != 1 && casefour_square[1] != 1 && casefour_square[2] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "abc'd',";
			}
			if (count[0][3] == 1 && casefour_bar[7] != 1 && four[0][3] == 1 && casetwo[2] != 1 && casetwo[12] != 1 && casetwo[31] != 1 && casetwo[19] != 1 && casefour_bar[0] != 1 && casefour_square[9] != 1 && casefour_square[15] != 1 && casefour_square[14] != 1 && casefour_square[2] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "ab'c'd',";
			}

			if (count[1][0] == 1 && casefour_bar[4] != 1 && four[1][0] == 1 && casetwo[3] != 1 && casetwo[13] != 1 && casetwo[16] != 1 && casetwo[20] != 1 && casefour_bar[1] != 1 && casefour_square[0] != 1 && casefour_square[3] != 1 && casefour_square[9] != 1 && casefour_square[10] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "a'b'c'd,";
			}
			if (count[1][1] == 1 && casefour_bar[5] != 1 && four[1][1] == 1 && casetwo[3] != 1 && casetwo[4] != 1 && casetwo[17] != 1 && casetwo[21] != 1 && casefour_bar[1] != 1 && casefour_square[0] != 1 && casefour_square[1] != 1 && casefour_square[3] != 1 && casefour_square[4] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "a'bc'd,";
			}
			if (count[1][2] == 1 && casefour_bar[6] != 1 && four[1][2] == 1 && casetwo[4] != 1 && casetwo[5] != 1 && casetwo[18] != 1 && casetwo[22] != 1 && casefour_bar[1] != 1 && casefour_square[1] != 1 && casefour_square[2] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "abc'd,";
			}
			if (count[1][3] == 1 && casefour_bar[7] != 1 && four[1][3] == 1 && casetwo[5] != 1 && casetwo[13] != 1 && casetwo[19] != 1 && casetwo[23] != 1 && casefour_bar[1] != 1 && casefour_square[10] != 1 && casefour_square[2] != 1 && casefour_square[5] != 1 && casefour_square[9] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "ab'c'd,";
			}


			if (count[2][0] == 1 && casefour_bar[4] != 1 && four[2][0] == 1 && casetwo[6] != 1 && casetwo[14] != 1 && casetwo[20] != 1 && casetwo[24] != 1 && casefour_bar[2] != 1 && casefour_square[3] != 1 && casefour_square[6] != 1 && casefour_square[10] != 1 && casefour_square[11] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "a'b'cd,";
			}
			if (count[2][1] == 1 && casefour_bar[5] != 1 && four[2][1] == 1 && casetwo[6] != 1 && casetwo[7] != 1 && casetwo[21] != 1 && casetwo[25] != 1 && casefour_bar[2] != 1 && casefour_square[3] != 1 && casefour_square[4] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "a'bcd,";
			}
			if (count[2][2] == 1 && casefour_bar[6] != 1 && four[2][2] == 1 && casetwo[7] != 1 && casetwo[8] != 1 && casetwo[22] != 1 && casetwo[26] != 1 && casefour_bar[2] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "abcd,";
			}
			if (count[2][3] == 1 && casefour_bar[7] != 1 && four[2][3] == 1 && casetwo[8] != 1 && casetwo[14] != 1 && casetwo[23] != 1 && casetwo[27] != 1 && casefour_bar[2] != 1 && casefour_square[8] != 1 && casefour_square[5] != 1 && casefour_square[10] != 1 && casefour_square[11] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "ab'cd,";
			}


			if (count[3][0] == 1 && casefour_bar[4] != 1 && four[3][0] == 1 && casetwo[9] != 1 && casetwo[15] != 1 && casetwo[24] != 1 && casetwo[28] != 1 && casefour_bar[3] != 1 && casefour_square[11] != 1 && casefour_square[6] != 1 && casefour_square[12] != 1 && casefour_square[15] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b'cd',";
			}

			if (count[3][1] == 1 && casefour_bar[5] != 1 && four[3][1] == 1 && casetwo[9] != 1 && casetwo[10] != 1 && casetwo[25] != 1 && casetwo[29] != 1 && casefour_bar[3] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && casefour_square[12] != 1 && casefour_square[13] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "a'bcd',";
			}

			if (count[3][2] == 1 && casefour_bar[6] != 1 && four[3][2] == 1 && casetwo[10] != 1 && casetwo[11] != 1 && casetwo[26] != 1 && casetwo[30] != 1 && casefour_bar[3] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && casefour_square[13] != 1 && casefour_square[14] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "abcd',";
			}

			if (count[3][3] == 1 && casefour_bar[7] != 1 && four[3][3] == 1 && casetwo[11] != 1 && casetwo[15] != 1 && casetwo[22] != 1 && casetwo[31] != 1 && casefour_bar[3] != 1 && casefour_square[8] != 1 && casefour_square[15] != 1 && casefour_square[11] != 1 && casefour_square[14] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "ab'cd',";
			}
			outfile << endl;
			outfile << "F(A,B,C,D):";
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (count[i][j] == 1)
					{
						if (caseeight[i] == 1)
						{
							switch (i)
							{
							case 0:
								outfile << "c'+ ";
								break;
							case 1:
								outfile << "d+";
								break;
							case 2:
								outfile << "c+";
								break;
							case 3:
								outfile << "d'+";
								break;
							}

						}
						if (caseeight[((i == 0) ? 3 : i - 1)] == 1)
						{

							switch (i - 1)
							{
							case 0:
								outfile << "c'+ ";
								break;
							case 1:
								outfile << "d+";
								break;
							case 2:
								outfile << "c+";
								break;
							case 3:
								outfile << "d'+";
								break;
							}

						}

						if (caseeight[i + 4] == 1)
						{
							switch (i + 4)
							{
							case 4:
								outfile << "a'b'+";
								break;
							case 5:
								outfile << "a'b+";
								break;
							case 6:
								outfile << "ab+";
								break;
							case 7:
								outfile << "ab'+";
								break;
							}
						}
						else if (casefour_bar[i] == 1)
						{

							switch (i)
							{
							case 0:
								outfile << "c'd'+";
								break;
							case 1:
								outfile << "c'd+";
								break;
							case 2:
								outfile << "cd+";
								break;
							case 3:
								outfile << "cd'+";
								break;


							}
						}


					}
				}
			}
			for (int j = 0; j < 4; j++)
			{
				if (count[0][j] == 1)
				{
					if (casefour_bar[j + 4] == 1)
					{
						switch (j + 4)
						{


						case 4:
							outfile << "a'b'+";
							break;
						case 5:
							outfile << "a'b+";
							break;
						case 6:
							outfile << "ab+";
							break;
						case 7:
							outfile << "ab'+";
							break;





						}

					}
				}
			}
			//00
			if (count[0][0] == 1)
			{
				if (casefour_square[0] == 1)
				{
					outfile << "a'c'+";

				}
				if (casefour_square[9] == 1)
				{
					outfile << "b'c'+";
				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd'+";
				}
				if (casefour_square[12] == 1)
				{
					outfile << "a'd'+";
				}

			}

			//03
			if (count[0][3] == 1)
			{
				if (casefour_square[2] == 1)
				{
					outfile << "ac'+";
				}
				if (casefour_square[9] == 1)
				{

					outfile << "b'c'+";

				}
				if (casefour_square[14] == 1)
				{
					outfile << "ad'+";
				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd'+";
				}
			}
			//30
			if (count[3][0] == 1)
			{
				if (casefour_square[6] == 1)
				{
					outfile << "a'c+";
				}
				if (casefour_square[12] == 1)
				{

					outfile << "a'd'+";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c+";

				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd'+";
				}
			}
			//33
			if (count[3][3] == 1)
			{
				if (casefour_square[14] == 1)
				{
					outfile << "ad'+";
				}
				if (casefour_square[8] == 1)
				{

					outfile << "ac+";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c+";

				}
				if (casefour_square[15] == 1)
				{
					outfile << "b'd'+";
				}
			}
			//10
			if (count[1][0] == 1)
			{
				if (casefour_square[0] == 1)
				{
					outfile << "a'c'+";
				}
				if (casefour_square[3] == 1)
				{

					outfile << "a'd+";

				}
				if (casefour_square[9] == 1)
				{
					outfile << "b'c'+";

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd+";
				}
			}
			//13
			if (count[1][3] == 1)
			{
				if (casefour_square[2] == 1)
				{
					outfile << "ac'+";
				}
				if (casefour_square[5] == 1)
				{

					outfile << "ad+";

				}
				if (casefour_square[9] == 1)
				{
					outfile << "b'c'+";

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd+";
				}
			}
			//20
			if (count[2][0] == 1)
			{
				if (casefour_square[3] == 1)
				{
					outfile << "a'd+";
				}
				if (casefour_square[6] == 1)
				{
					outfile << "a'c+";


				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd+";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c+";
				}
			}
			//23
			if (count[2][3] == 1)
			{
				if (casefour_square[5] == 1)
				{
					outfile << "ad+";
				}
				if (casefour_square[8] == 1)
				{

					outfile << "ac+";

				}
				if (casefour_square[10] == 1)
				{
					outfile << "b'd+";

				}
				if (casefour_square[11] == 1)
				{
					outfile << "b'c+";
				}
			}

			for (int i = 0; i<4; i++)
			{
				for (int j = 1; j<3; j++)
				{
					if (count[i][j] == 0)
					{
						//01
						if (casefour_square[j - 1] == 1)
						{
							switch (j - 1)
							{
							case 0:
								outfile << "a'c'+";
								break;
							case 1:
								outfile << "bc'+";
								break;
							case 2:
								outfile << "ac'+";
								break;
							}
						}
						if (casefour_square[j] == 1)
						{
							switch (j)
							{

							case 1:
								outfile << "bc'+";
								break;
							case 2:
								outfile << "ac'+";
								break;
							case 3:
								outfile << "a'd+";
								break;
							}
						}
						if (casefour_square[j + 11] == 1)
						{
							switch (j + 11)
							{
							case 12:
								outfile << "a'd'+";
								break;
							case 13:
								outfile << "bd'+";
								break;
							case 14:
								outfile << "ad'+";
								break;
							}
						}
						if (casefour_square[j + 12] == 1)
						{
							switch (j + 12)
							{
							case 13:
								outfile << "bd'+";
								break;
							case 14:
								outfile << "ad'+";
								break;
							case 15:
								outfile << "b'd'+";
								break;
							}
						}

					}
				}
			}
			if (count[0][0] == 1)
			{
				if (casetwo[0] == 1)
				{
					outfile << "a'c'd'+";
				}
				if (casetwo[16] == 1)
				{
					outfile << "a'b'c'+";
				}
				if (casetwo[12] == 1)
				{
					outfile << "b'c'd'+";
				}
				if (casetwo[28] == 1)
				{
					outfile << "a'b'd'+";
				}
			}
			if (count[0][1] == 1)
			{
				if (casetwo[0] == 1)
				{
					outfile << "a'c'd'+";
				}
				if (casetwo[1] == 1)
				{
					outfile << "bc'd'+";
				}
				if (casetwo[29] == 1)
				{
					outfile << "a'bd'+";
				}
				if (casetwo[17] == 1)
				{
					outfile << "a'bc'+";
				}
			}
			if (count[0][2] == 1)
			{
				if (casetwo[1] == 1)
				{
					outfile << "bc'd'+";
				}
				if (casetwo[2] == 1)
				{
					outfile << "ac'd'+";
				}
				if (casetwo[30] == 1)
				{
					outfile << "abd'+";
				}
				if (casetwo[18] == 1)
				{
					outfile << "abc'+";
				}
			}
			if (count[0][3] == 1)
			{
				if (casetwo[2] == 1)
				{
					outfile << "ac'd'+";
				}
				if (casetwo[3] == 1)
				{
					outfile << "a'c'd+";
				}
				if (casetwo[31] == 1)
				{
					outfile << "ab'd'+";
				}
				if (casetwo[19] == 1)
				{
					outfile << "ab'c'+";
				}
			}
			if (count[1][0] == 1)
			{
				if (casetwo[3] == 1)
				{
					outfile << "a'c'd+";
				}
				if (casetwo[13] == 1)
				{
					outfile << "b'c'd+";
				}
				if (casetwo[16] == 1)
				{
					outfile << "a'b'c'+";
				}
				if (casetwo[20] == 1)
				{
					outfile << "a'b'd+";
				}
			}
			if (count[1][1] == 1)
			{
				if (casetwo[3] == 1)
				{
					outfile << "a'c'd+";
				}
				if (casetwo[4] == 1)
				{
					outfile << "bc'd+";
				}
				if (casetwo[17] == 1)
				{
					outfile << "a'bc'+";
				}
				if (casetwo[21] == 1)
				{
					outfile << "a'bd+";
				}
			}
			if (count[1][2] == 1)
			{
				if (casetwo[4] == 1)
				{
					outfile << "bc'd+";
				}
				if (casetwo[5] == 1)
				{
					outfile << "ac'd+";
				}
				if (casetwo[18] == 1)
				{
					outfile << "abc'+";
				}
				if (casetwo[22] == 1)
				{
					outfile << "abd+";
				}
			}
			if (count[1][3] == 1)
			{
				if (casetwo[5] == 1)
				{
					outfile << "ac'd+";
				}
				if (casetwo[13] == 1)
				{
					outfile << "b'c'd+";
				}
				if (casetwo[19] == 1)
				{
					outfile << "ab'c'+";
				}
				if (casetwo[23] == 1)
				{
					outfile << "ab'd+";
				}
			}
			if (count[2][0] == 1)
			{
				if (casetwo[6] == 1)
				{
					outfile << "a'cd+";
				}
				if (casetwo[14] == 1)
				{
					outfile << "b'cd+";
				}
				if (casetwo[20] == 1)
				{
					outfile << "a'b'd+";
				}
				if (casetwo[24] == 1)
				{
					outfile << "a'b'c+";
				}
			}
			if (count[2][1] == 1)
			{
				if (casetwo[6] == 1)
				{
					outfile << "a'cd+";
				}
				if (casetwo[7] == 1)
				{
					outfile << "bcd+";
				}
				if (casetwo[21] == 1)
				{
					outfile << "a'bd+";
				}
				if (casetwo[25] == 1)
				{
					outfile << "a'bc+";
				}
			}
			if (count[2][2] == 1)
			{
				if (casetwo[7] == 1)
				{
					outfile << "bcd+";
				}
				if (casetwo[8] == 1)
				{
					outfile << "acd+";
				}
				if (casetwo[22] == 1)
				{
					outfile << "abd+";
				}
				if (casetwo[26] == 1)
				{
					outfile << "abc+";
				}
			}
			if (count[2][3] == 1)
			{
				if (casetwo[8] == 1)
				{
					outfile << "acd+";
				}
				if (casetwo[14] == 1)
				{
					outfile << "b'cd+";
				}
				if (casetwo[23] == 1)
				{
					outfile << "ab'd+";
				}
				if (casetwo[27] == 1)
				{
					outfile << "ab'c+";
				}
			}
			if (count[3][0] == 1)
			{
				if (casetwo[9] == 1)
				{
					outfile << "a'cd'+";
				}
				if (casetwo[15] == 1)
				{
					outfile << "b'cd'+";
				}
				if (casetwo[28] == 1)
				{
					outfile << "a'b'd'+";
				}
				if (casetwo[24] == 1)
				{
					outfile << "a'b'c+";
				}
			}
			if (count[3][1] == 1)
			{
				if (casetwo[10] == 1)
				{
					outfile << "bcd'+";
				}
				if (casetwo[9] == 1)
				{
					outfile << "a'cd'+";
				}
				if (casetwo[29] == 1)
				{
					outfile << "a'bd'+";
				}
				if (casetwo[25] == 1)
				{
					outfile << "a'bc+";
				}
			}
			if (count[3][2] == 1)
			{
				if (casetwo[10] == 1)
				{
					outfile << "bcd'+";
				}
				if (casetwo[11] == 1)
				{
					outfile << "acd'+";
				}
				if (casetwo[30] == 1)
				{
					outfile << "abd'+";
				}
				if (casetwo[26] == 1)
				{
					outfile << "abc+";
				}
			}
			if (count[3][3] == 1)
			{
				if (casetwo[15] == 1)
				{
					outfile << "b'cd'+";
				}
				if (casetwo[11] == 1)
				{
					outfile << "acd'+";
				}
				if (casetwo[31] == 1)
				{
					outfile << "ab'd'+";
				}
				if (casetwo[27] == 1)
				{
					outfile << "ab'c+";
				}
			}

			if (count[0][0] == 1 && casefour_bar[4] != 1 && four[0][0] == 1 && casetwo[0] != 1 && casetwo[12] != 1 && casetwo[16] != 1 && casetwo[28] != 1 && casefour_bar[0] != 1 && casefour_square[0] != 1 && casefour_square[9] != 1 && casefour_square[15] != 1 && casefour_square[12] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b'c'd'+";
			}
			if (count[0][1] == 1 && casefour_bar[5] != 1 && four[0][1] == 1 && casetwo[0] != 1 && casetwo[1] != 1 && casetwo[17] != 1 && casetwo[29] != 1 && casefour_bar[0] != 1 && casefour_square[12] != 1 && casefour_square[13] != 1 && casefour_square[1] != 1 && casefour_square[0] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b c'd'+";
			}
			if (count[0][2] == 1 && casefour_bar[6] != 1 && four[0][2] == 1 && casetwo[1] != 1 && casetwo[2] != 1 && casetwo[30] != 1 && casetwo[18] != 1 && casefour_bar[0] != 1 && casefour_square[13] != 1 && casefour_square[14] != 1 && casefour_square[1] != 1 && casefour_square[2] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "abc'd'+";
			}
			if (count[0][3] == 1 && casefour_bar[7] != 1 && four[0][3] == 1 && casetwo[2] != 1 && casetwo[12] != 1 && casetwo[31] != 1 && casetwo[19] != 1 && casefour_bar[0] != 1 && casefour_square[9] != 1 && casefour_square[15] != 1 && casefour_square[14] != 1 && casefour_square[2] != 1 && caseeight[0] != 1 && caseeight[3] != 1)
			{
				outfile << "ab'c'd'+";
			}

			if (count[1][0] == 1 && casefour_bar[4] != 1 && four[1][0] == 1 && casetwo[3] != 1 && casetwo[13] != 1 && casetwo[16] != 1 && casetwo[20] != 1 && casefour_bar[1] != 1 && casefour_square[0] != 1 && casefour_square[3] != 1 && casefour_square[9] != 1 && casefour_square[10] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "a'b'c'd+";
			}
			if (count[1][1] == 1 && casefour_bar[5] != 1 && four[1][1] == 1 && casetwo[3] != 1 && casetwo[4] != 1 && casetwo[17] != 1 && casetwo[21] != 1 && casefour_bar[1] != 1 && casefour_square[0] != 1 && casefour_square[1] != 1 && casefour_square[3] != 1 && casefour_square[4] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "a'bc'd+";
			}
			if (count[1][2] == 1 && casefour_bar[6] != 1 && four[1][2] == 1 && casetwo[4] != 1 && casetwo[5] != 1 && casetwo[18] != 1 && casetwo[22] != 1 && casefour_bar[1] != 1 && casefour_square[1] != 1 && casefour_square[2] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "abc'd+";
			}
			if (count[1][3] == 1 && casefour_bar[7] != 1 && four[1][3] == 1 && casetwo[5] != 1 && casetwo[13] != 1 && casetwo[19] != 1 && casetwo[23] != 1 && casefour_bar[1] != 1 && casefour_square[10] != 1 && casefour_square[2] != 1 && casefour_square[5] != 1 && casefour_square[9] != 1 && caseeight[0] != 1 && caseeight[1] != 1)
			{
				outfile << "ab'c'd+";
			}


			if (count[2][0] == 1 && casefour_bar[4] != 1 && four[2][0] == 1 && casetwo[6] != 1 && casetwo[14] != 1 && casetwo[20] != 1 && casetwo[24] != 1 && casefour_bar[2] != 1 && casefour_square[3] != 1 && casefour_square[6] != 1 && casefour_square[10] != 1 && casefour_square[11] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "a'b'cd+";
			}
			if (count[2][1] == 1 && casefour_bar[5] != 1 && four[2][1] == 1 && casetwo[6] != 1 && casetwo[7] != 1 && casetwo[21] != 1 && casetwo[25] != 1 && casefour_bar[2] != 1 && casefour_square[3] != 1 && casefour_square[4] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "a'bcd+";
			}
			if (count[2][2] == 1 && casefour_bar[6] != 1 && four[2][2] == 1 && casetwo[7] != 1 && casetwo[8] != 1 && casetwo[22] != 1 && casetwo[26] != 1 && casefour_bar[2] != 1 && casefour_square[4] != 1 && casefour_square[5] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "abcd+";
			}
			if (count[2][3] == 1 && casefour_bar[7] != 1 && four[2][3] == 1 && casetwo[8] != 1 && casetwo[14] != 1 && casetwo[23] != 1 && casetwo[27] != 1 && casefour_bar[2] != 1 && casefour_square[8] != 1 && casefour_square[5] != 1 && casefour_square[10] != 1 && casefour_square[11] != 1 && caseeight[1] != 1 && caseeight[2] != 1)
			{
				outfile << "ab'cd+";
			}


			if (count[3][0] == 1 && casefour_bar[4] != 1 && four[3][0] == 1 && casetwo[9] != 1 && casetwo[15] != 1 && casetwo[24] != 1 && casetwo[28] != 1 && casefour_bar[3] != 1 && casefour_square[11] != 1 && casefour_square[6] != 1 && casefour_square[12] != 1 && casefour_square[15] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "a'b'cd'+";
			}

			if (count[3][1] == 1 && casefour_bar[5] != 1 && four[3][1] == 1 && casetwo[9] != 1 && casetwo[10] != 1 && casetwo[25] != 1 && casetwo[29] != 1 && casefour_bar[3] != 1 && casefour_square[6] != 1 && casefour_square[7] != 1 && casefour_square[12] != 1 && casefour_square[13] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "a'bcd'+";
			}

			if (count[3][2] == 1 && casefour_bar[6] != 1 && four[3][2] == 1 && casetwo[10] != 1 && casetwo[11] != 1 && casetwo[26] != 1 && casetwo[30] != 1 && casefour_bar[3] != 1 && casefour_square[7] != 1 && casefour_square[8] != 1 && casefour_square[13] != 1 && casefour_square[14] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "abcd'+";
			}

			if (count[3][3] == 1 && casefour_bar[7] != 1 && four[3][3] == 1 && casetwo[11] != 1 && casetwo[15] != 1 && casetwo[22] != 1 && casetwo[31] != 1 && casefour_bar[3] != 1 && casefour_square[8] != 1 && casefour_square[15] != 1 && casefour_square[11] != 1 && casefour_square[14] != 1 && caseeight[2] != 1 && caseeight[3] != 1)
			{
				outfile << "ab'cd'+";
			}

			
	


	}


}






int main()
{
	// 讀檔跟設值
	ifstream readfile("input.txt", ios::in);
	if (!readfile) {
		cerr << "Failed opening" << endl;
		exit(1);

	}
	ofstream outfile("output.txt", ios::out);
	if (!outfile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	int v = 0;
	int m[16] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int d[16] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	char buffer;
	readfile >> buffer;// -
	for (int i = 0; i < 3; i++)
	{
		readfile >> buffer;
		if (buffer == 'v')
		{
			readfile >> v >> buffer;
		}
		else if (buffer == 'm')
		{
			int x = 0;
			while (readfile >> m[x])
			{

				readfile >> buffer;
				if (buffer == '-')//過濾-
				{
					break;
				}
				x++;
			}
		}
		else if (buffer == 'd')
		{
			int ii = 0;
			while (readfile >> d[ii])
			{
				readfile >> buffer;
				if (buffer == '-')
				{
					break;
				}
				ii++;
			}
		}
	}
	cout << v << endl;

	readfile.close();
	//-------------------------Initialize the terms in the K-map----------------
	int two[2][2] = { { 0,2 } ,{ 1,3 } };//分配位置
	int three[2][4] = { { 0,2,6,4 } ,{ 1,3,7,5 } };
	int four[4][4] = { { 0,4,12,8 },{ 1,5,13,9 },{ 3,7,15,11 },{ 2,6,14,10 } };
	if (v == 4)//如果讀到4變數 就進入
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 16; k++)
				{
					if (four[i][j] == d[k])
					{
						four[i][j] = 16;

					}
				}
			}
		}


		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 16; k++)
				{
					if (four[i][j] == m[k])
					{
						four[i][j] = 1;

					}
				}
			}
		}



		
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 16; k++)
				{
					if (four[i][j] != 1 && four[i][j] != 16)
					{
						four[i][j] = 0;

					}
				}
			}
		}
		cout << endl;
		int num = 0;
		int num2 = 0;
		//debug
		for (int i = 0; i < 16; i++)
		{
			if (m[i] != 1)
			{
				num++;
			}
			if (d[i] != 1)
			{
				num2++;
			}
		}
		if (num == 16 && num2 == 16)
		{
			four[1][0] = 0;
		}
		fourgetmap(four);//output map
		fourterm(four);//處理 essential跟prime
	}
	else if (v == 3)//如果讀到3變數，就進入
	{


		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					if (three[i][j] == d[k])
					{

						three[i][j] = 8;  //我把dontcare設成整數8

					}
				}
			}
		}


		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					if (three[i][j] == m[k])
					{
						three[i][j] = 1;

					}
				}
			}
		}

		cout << endl;
	

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					if (three[i][j] != 1 && three[i][j] != 8)
					{
						three[i][j] = 0;

					}
				}
			}
		}

		

		//debug
		int num = 0;
		int num2 = 0;
		for (int i = 0; i < 8; i++)
		{
			if (m[i] != 1)
			{
				num++;
			}
			if (d[i] != 1)
			{
				num2++;
			}
		}
		if (num == 8 && num2 == 8)
		{
			three[1][0] = 0;
		}

		threegetmap(three);//output map

		threeterm(three);//處理prime， essential






	}
	else if (v == 2) //如果讀到2變數就進入
	{
		int num = 0;
		int num2 = 0;


		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					if (two[i][j] == d[k])
					{
						two[i][j] = 4;  //我把dontcare設成整數4

					}
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					if (two[i][j] == m[k])
					{
						two[i][j] = 1;

					}
				}
			}
		}




		cout << endl;


		//debug
		for (int i = 0; i < 4; i++)
		{
			if (m[i] != 1)
			{
				num++;
			}
			if (d[i] != 1)
			{
				num2++;
			}
		}
		if (num == 4 && num2 == 4)
		{
			two[0][1] = 0;
		}


		cout << endl;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					if (two[i][j] != 1 && two[i][j] != 4)
					{
						two[i][j] = 0;

					}
				}
			}
		}

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << two[i][j] << " ";
			}
			cout << endl;
		}
		twogetmap(two);//output map
		twoterm(two);//處理
	}


	system("pause");


}