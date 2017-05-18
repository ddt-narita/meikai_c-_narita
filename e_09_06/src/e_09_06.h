/* 演習09－06
 * 数当てゲームのヘッダ
 * 作成日：5月18日
 * 作成者：成田修之
 */

void initialize();
void gen_no();
int judge (int cand);
int input();
bool confirm_retry();

extern int max_no;
extern int kotae;
