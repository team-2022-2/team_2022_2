#ifndef SHOT_H
#define SHOT_H

#if 8
//******************************************************************************
// TODO:08 弾の最大数を定義
//------------------------------------------------------------------------------
/*
課題）
    弾の最大数の定数を定義しましょう。名前はSHOT_MAX、数値は512にしておきます。
*/
//******************************************************************************
#endif
//TODO_08
#define SHOT_MAX 512


#if 13
//******************************************************************************
// TODO:13 SHOT_BEGINとSHOT_ENDの定義
//------------------------------------------------------------------------------
/*
課題）
    下記の定数を#defineで定義しましょう。

    [定数名]        [値]
    SHOT_BEGIN      0番目の弾のアドレス
    SHOT_END        SHOT_MAX番目の弾のアドレス

解説）
    このあとで、ポインタを有効に使ってループを記述していくので、ここで弾の先頭
    アドレスと、配列の要素数番目のアドレスを定数として定義しておきます。

    配列名[要素数番目]はもちろん存在しませんが、ループの終端として使うためです。
*/
//******************************************************************************
#endif
//TODO_13
#define SHOT_BEGIN &shot[0]
#define SHOT_END &shot[SHOT_MAX]

#if 19
//******************************************************************************
// TODO:19 shotをextern宣言
//------------------------------------------------------------------------------
/*
課題）
    shotをextern宣言しましょう。

解説）
    SHOT_BEGINとSHOT_ENDをヘッダーに記述していても、中身である配列shotもextern
    宣言しないといけませんね。
*/
//******************************************************************************
#endif
//TODO_19
extern OBJ2D shot[SHOT_MAX];

extern int shot_state;

void shot_init();
void shot_deinit();
void shot_update();
void shot_render();

void moveShot0(OBJ2D* obj);
void moveShot0_2(OBJ2D* obj);
void moveShot0_3(OBJ2D* obj);
void moveShot0_4(OBJ2D* obj);
void moveShot1(OBJ2D* obj);
void moveShot2(OBJ2D* obj);

#endif//SHOT_H
