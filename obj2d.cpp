#include "all.h"

//--------------------------------------
//  OBJ2D�̋󂫂������Đ���������֐��i���j
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

    return NULL;                        // �����ł��Ȃ�����
}

//--------------------------------------
//  OBJ2D�̋󂫂������Đ���������֐�
//--------------------------------------
OBJ2D* searchSet(OBJ2D* begin, OBJ2D* end, OBJ2D::FUNC_PTR moveAlg, VECTOR2 pos)
{
#if 17
//******************************************************************************
// TODO:17 searchSet�֐�
//------------------------------------------------------------------------------
/*
�ۑ�j
    searchSet0�֐�����L�̈����ł���ς��܂��B
    ����́A������̌`���g�p���Ă����܂��傤�B
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

    return NULL;                        // �����ł��Ȃ�����
}

//--------------------------------------
//  OBJ2D�̃|�C���^�������Ƃ����`��֐�
//--------------------------------------
#if 12
//******************************************************************************
// TODO:12 OBJ2D�̃|�C���^�������Ƃ����`��֐�
//------------------------------------------------------------------------------
/*
�ۑ�j
    ���L�̊֐����쐬���܂��傤�B

    �߂�l     void�^
    �֐���     sprite_render�i�֐�����sprite_render�Ɠ����ŗǂ��j
    ����       OBJ2D* obj

    ���e       GameLib::sprite_render���s���B������obj�̒��ɓ����Ă�����̂��g���B

����j
    Sprite*��p�x�Ȃǂ��A�S��OBJ2D�̃����o�ϐ����g�p����sprite_render�֐�������
    �܂��B�܂�AGameLib::sprite_render�֐������b�v����킯�ł��B
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
//  OBJ2D���͈͓��ɂ��邩���ׂ�֐�
//--------------------------------------
#if 20
//******************************************************************************
// TODO:20 OBJ2D���͈͓��ɂ��邩���ׂ�֐�
//------------------------------------------------------------------------------
/*
�ۑ�j
    ���L�̎d�l�̊֐����쐬���Ȃ����B

    �߂�l     bool        �itrue:�͈͓��ɂ���    false:�͈͊O�ɂ���j
    �֐���     areaCheck
    �����@     OBJ2D* obj

    ���e       ������obj�̈ʒu���A��ʂ���㉺���E�̂����ꂩ��SCREEN_LIMIT���ȏ�
               �O�ɏo�Ă�����false��Ԃ��B�����łȂ����true��Ԃ��B
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
