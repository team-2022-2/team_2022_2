#include "all.h"

//--------------------------------------
//  OBJ2Dの空きを見つけて生成させる関数（仮）
//--------------------------------------
OBJ2D* searchSet0(OBJ2D arr[], int dataNum, void(*moveAlg)(OBJ2D*), VECTOR2 pos)
{
    for (int i = 0; i < dataNum; ++i)
    {
        if (arr[i].moveAlg)     continue;

        arr[i]          = {};
        arr[i].moveAlg  = moveAlg;
        arr[i].pos      = pos;
        return &arr[i];
    }

    return NULL;                        // 生成できなかった
}

//--------------------------------------
//  OBJ2Dの空きを見つけて生成させる関数
//--------------------------------------
OBJ2D* searchSet(OBJ2D* begin, OBJ2D* end, OBJ2D::FUNC_PTR moveAlg, VECTOR2 pos)
{
#if 17
//******************************************************************************
// TODO:17 searchSet関数
//------------------------------------------------------------------------------
/*
課題）
    searchSet0関数を上記の引数でつくり変えます。
    今後は、こちらの形を使用していきましょう。
*/
//******************************************************************************
#endif
    //TODO_17
    for (OBJ2D* p = begin; p != end; ++p)
    {
        if (p->moveAlg) continue;

        *p = {};
        p->moveAlg = moveAlg;
        p->pos = pos;
        return p;
    }

    return NULL;                        // 生成できなかった
}

//--------------------------------------
//  OBJ2Dのポインタを引数とした描画関数
//--------------------------------------
#if 12
//******************************************************************************
// TODO:12 OBJ2Dのポインタを引数とした描画関数
//------------------------------------------------------------------------------
/*
課題）
    下記の関数を作成しましょう。

    戻り値     void型
    関数名     sprite_render（関数名はsprite_renderと同名で良い）
    引数       OBJ2D* obj

    内容       GameLib::sprite_renderを行う。引数はobjの中に入っているものを使う。

解説）
    Sprite*や角度なども、全てOBJ2Dのメンバ変数を使用するsprite_render関数をつくり
    ます。つまり、GameLib::sprite_render関数をラップするわけです。
*/
//******************************************************************************
#endif
//TODO_12
void sprite_render(OBJ2D* obj)
{
        sprite_render
        (obj->spr,
        obj->pos.x, obj->pos.y,
        obj->scale.x, obj->scale.y,
        obj->texPos.x, obj->texPos.y,
        obj->texSize.x, obj->texSize.y,
        obj->pivot.x, obj->pivot.y,
        obj->angle);
}
//--------------------------------------
//  OBJ2Dが範囲内にいるか調べる関数
//--------------------------------------
#if 20
//******************************************************************************
// TODO:20 OBJ2Dが範囲内にいるか調べる関数
//------------------------------------------------------------------------------
/*
課題）
    下記の仕様の関数を作成しなさい。

    戻り値     bool        （true:範囲内にいる    false:範囲外にいる）
    関数名     areaCheck
    引数　     OBJ2D* obj

    内容       引数のobjの位置が、画面から上下左右のいずれかにSCREEN_LIMIT分以上
               外に出ていたらfalseを返す。そうでなければtrueを返す。
*/
//******************************************************************************
#endif
//TODO_20

bool areaCheck(OBJ2D* obj)
{
    if (obj->pos.y > (SCREEN_H + SCREEN_LIMIT) || -SCREEN_LIMIT > obj->pos.y || -SCREEN_LIMIT > obj->pos.x || obj->pos.x > (SCREEN_W + SCREEN_LIMIT))
    {
        return false;
    }

    return true;
}
