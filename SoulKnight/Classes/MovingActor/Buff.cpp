#include"Buff.h"
 
Buff* Buff::create(EBuffType _bufftype,
    int _buffHP, int _buffMP,
    float _buffMoveSpeed, float _duration)
{
    Buff* buff = new Buff();
    if (buff && buff->init(_bufftype, _buffHP, _buffMP, _buffMoveSpeed, _duration))
    {
        buff->autorelease();
    }

    return buff;


    CC_SAFE_DELETE(buff);

    return nullptr;

}


bool Buff::init(EBuffType _bufftype,
    int _buffHP, int _buffMP,
    float _buffMoveSpeed, float _duration)
{
    if (!Sprite::init())
    {

        return false;

    }
    //��ʼ������

    buffType = _bufftype;
    buffHP = _buffHP;
    buffMP = _buffMP;
    buffMoveSpeed = _buffMoveSpeed;
    duration = _duration;


    //
    beginTime = GetCurrentTime() / 1000.f;
    endTime = beginTime + duration;

    return true;

}

bool Buff::init(ValueVector& data)
{

    if (!Sprite::init())
    {
        return false;

    }



    //�о�û��Ҫд�������ӿڰ�
    return true;

}