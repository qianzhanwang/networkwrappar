#include "MsgBuild.h"
#include "../MsgPackQueue/MsgPackQueue.h"
BULDMSG_BEGIN

    BUILDMSG_CASE_FUN(MsgHead);
    BUILDMSG_CASE_FUN(MsgBeginLogin);
    BUILDMSG_CASE_FUN(MsgC2SReqRoleInfo);
    BUILDMSG_CASE_FUN(MsgS2CAckRoleInfo);
    BUILDMSG_CASE_FUN(MsgS2CUpdateRoleInfo);
    BUILDMSG_CASE_FUN(MsgS2CNotifyError);
    BUILDMSG_CASE_FUN(MsgEndLogin);
    BUILDMSG_CASE_FUN(MsgBeginBigWorld);
    BUILDMSG_CASE_FUN(MsgC2SReqMarch);
    BUILDMSG_CASE_FUN(MsgS2CAckMarch);
    BUILDMSG_CASE_FUN(MsgS2CNewNode);
    BUILDMSG_CASE_FUN(MsgC2SReqDstView);
    BUILDMSG_CASE_FUN(MsgS2CAckDstView);
    BUILDMSG_CASE_FUN(MsgC2SReqMineDetail);
    BUILDMSG_CASE_FUN(MsgS2CAckMineDetail);
    BUILDMSG_CASE_FUN(MsgC2SReqLeaveWorld);
    BUILDMSG_CASE_FUN(MsgC2SReqInvestigate);
    BUILDMSG_CASE_FUN(MsgC2SReqArmyBackHome);
    BUILDMSG_CASE_FUN(MsgEndBigWorld);
    BUILDMSG_CASE_FUN(MsgBeginChat);
    BUILDMSG_CASE_FUN(MsgC2SReqChat);
    BUILDMSG_CASE_FUN(MsgS2CAckChat);
    BUILDMSG_CASE_FUN(MsgS2CGMResult);
    BUILDMSG_CASE_FUN(MsgEndChat);
    BUILDMSG_CASE_FUN(MsgBeginReport);
    BUILDMSG_CASE_FUN(MsgC2SReqReport);
    BUILDMSG_CASE_FUN(MsgS2CAckReport);
    BUILDMSG_CASE_FUN(MsgC2SReqFightReport);
    BUILDMSG_CASE_FUN(MsgS2CAckFightReport);
    BUILDMSG_CASE_FUN(MsgC2SReqInvestReport);
    BUILDMSG_CASE_FUN(MsgS2CAckInvestReport);
    BUILDMSG_CASE_FUN(MsgEndReport);
    BUILDMSG_CASE_FUN(MsgBeginBoss);
    BUILDMSG_CASE_FUN(MsgS2CNotifyBoss);
    BUILDMSG_CASE_FUN(MsgS2CNotifyTurret);
    BUILDMSG_CASE_FUN(MsgS2CTurretAttack);
    BUILDMSG_CASE_FUN(MsgEndBoss);
BUILDMSG_END
