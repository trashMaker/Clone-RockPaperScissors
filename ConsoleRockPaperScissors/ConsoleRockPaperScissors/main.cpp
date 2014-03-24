/*********************************************************
*	C++初心者たんが、ジャンケンを作ってみた
*
*	Description:サンプル群を理解してるか確認のために作った物
*
*  C++DE★じゃんけん★　Ver 0
*
*						 CopyRight Cト
*							2014/03/23
* 						  License:MIT	http://opensource.org/licenses/mit-license.php　(原文)
*										http://sourceforge.jp/projects/opensource/wiki/licenses%2FMIT_license　(オープンソースグループ・ジャパンによる日本語参考訳)
*
* わかりやすく wikiより転載
*
* 1.このソフトウェアを誰でも無償で無制限に扱って良い。
*   ただし、著作権表示および本許諾表示をソフトウェア
*   のすべての複製または重要な部分に記載しなければならない。
*
* 2.作者または著作権者は、ソフトウェアに関してなんら責任を負わない。
*
*/

#include "Common.h"
#include "ConsoleRockPaperScissors.h"

int main(){

	srand((unsigned int)time(NULL));//rand()関数の罠回避

	ConsoleRockPaperScissors crs;

	crs.mainLoop();

	return 0;
}