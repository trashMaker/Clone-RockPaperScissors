/*********************************************************
*	C++���S�҂��񂪁A�W�����P��������Ă݂�
*
*	Description:�T���v���Q�𗝉����Ă邩�m�F�̂��߂ɍ������
*
*  C++DE������񂯂񁚁@Ver 0
*
*						 CopyRight C�g
*							2014/03/23
* 						  License:MIT	http://opensource.org/licenses/mit-license.php�@(����)
*										http://sourceforge.jp/projects/opensource/wiki/licenses%2FMIT_license�@(�I�[�v���\�[�X�O���[�v�E�W���p���ɂ����{��Q�l��)
*
* �킩��₷�� wiki���]��
*
* 1.���̃\�t�g�E�F�A��N�ł������Ŗ������Ɉ����ėǂ��B
*   �������A���쌠�\������і{�����\�����\�t�g�E�F�A
*   �̂��ׂĂ̕����܂��͏d�v�ȕ����ɋL�ڂ��Ȃ���΂Ȃ�Ȃ��B
*
* 2.��҂܂��͒��쌠�҂́A�\�t�g�E�F�A�Ɋւ��ĂȂ��ӔC�𕉂�Ȃ��B
*
*/

#include "Common.h"
#include "ConsoleRockPaperScissors.h"

int main(){

	srand((unsigned int)time(NULL));//rand()�֐���㩉��

	ConsoleRockPaperScissors crs;

	crs.mainLoop();

	return 0;
}