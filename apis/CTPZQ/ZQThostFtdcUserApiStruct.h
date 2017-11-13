/////////////////////////////////////////////////////////////////////////
///@system ��һ��������ϵͳ
///@company �Ϻ��ڻ���Ϣ�������޹�˾
///@file ZQThostFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
///20060106	�Ժ��		�������ļ�
/////////////////////////////////////////////////////////////////////////

#if !defined(_ZQTHOST_FTDCSTRUCT_H)
#define _ZQTHOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ZQThostFtdcUserApiDataType.h"
///��Ӧ��Ϣ
struct CZQThostFtdcRspInfoField
{
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��Ϣ�ַ�
struct CZQThostFtdcDisseminationField
{
	///����ϵ�к�
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TZQThostFtdcSequenceNoType	SequenceNo;
};

///�û���¼����
struct CZQThostFtdcReqUserLoginField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����
	TZQThostFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TZQThostFtdcMacAddressType	MacAddress;
	///��̬����
	TZQThostFtdcPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TZQThostFtdcIPAddressType	ClientIPAddress;
	///�ӿ�����
	TZQThostFtdcLangType	Lang;
};

///�û���¼Ӧ��
struct CZQThostFtdcRspUserLoginField
{
	///��¼�ɹ�ʱ��
	TZQThostFtdcTimeType	LoginTime;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����ϵͳ����
	TZQThostFtdcSystemNameType	SystemName;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///��󱨵�����
	TZQThostFtdcOrderRefType	MaxOrderRef;
};

///�û��ǳ�����
struct CZQThostFtdcUserLogoutField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///ǿ�ƽ���Ա�˳�
struct CZQThostFtdcForceUserLogoutField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///ȫ���ǳ�
struct CZQThostFtdcLogoutAllField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///ϵͳ����
	TZQThostFtdcSystemNameType	SystemName;
};

///�����û�����
struct CZQThostFtdcUserPasswordUpdateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///������
	TZQThostFtdcPasswordType	OldPassword;
	///������
	TZQThostFtdcPasswordType	NewPassword;
};

///�����û�
struct CZQThostFtdcActivateUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///�ͻ�����֤����
struct CZQThostFtdcReqAuthenticateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///��֤��
	TZQThostFtdcAuthCodeType	AuthCode;
};

///�ͻ�����֤��Ӧ
struct CZQThostFtdcRspAuthenticateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
};

///�ͻ�����֤��Ϣ
struct CZQThostFtdcAuthenticationInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///��֤��Ϣ
	TZQThostFtdcAuthInfoType	AuthInfo;
	///�Ƿ�Ϊ��֤���
	TZQThostFtdcBoolType	IsResult;
};

///����¼��
struct CZQThostFtdcInputOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
	///��������־
	TZQThostFtdcBoolType	IsSwapOrder;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
};

///���뱨������
struct CZQThostFtdcInputOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///ת�й�¼��
struct CZQThostFtdcInputCustodyTransferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�걨����
	TZQThostFtdcVolumeType	Volume;
	///ת�뽻�׵�Ԫ
	TZQThostFtdcPbuIDType	InPbuID;
	///ת�й�����
	TZQThostFtdcCustodyTransferTypeType	CustodyTransferType;
	///������
	TZQThostFtdcRequestIDType	RequestID;
};

///У���û�����
struct CZQThostFtdcVerifyUserPasswordField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����
	TZQThostFtdcPasswordType	Password;
};

///ת�йܱ�������
struct CZQThostFtdcInputCustodyTransferActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
};

///�ʽ�ת��
struct CZQThostFtdcInputTransferFundField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	AccountID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///ת�Ʒ���
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///ת�˽��
	TZQThostFtdcMoneyType	Amount;
};

///�����ʽ�ת��
struct CZQThostFtdcInputRepealFundField
{
	///������CTPת����ˮ��
	TZQThostFtdcSerialType	CTPRepealFundSerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	AccountID;
};

///��λת��
struct CZQThostFtdcInputTransferPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///ת�Ʒ���
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///����
	TZQThostFtdcVolumeType	Volume;
	///ת�Ƴֲ�����
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
};

///������λת��
struct CZQThostFtdcInputRepealPositionField
{
	///������CTPת����ˮ��
	TZQThostFtdcSerialType	CTPRepealPositionSerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///���鶩��
struct CZQThostFtdcSpecificInstrumentField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///����
struct CZQThostFtdcOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TZQThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TZQThostFtdcOrderStatusType	OrderStatus;
	///��������
	TZQThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TZQThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TZQThostFtdcVolumeType	VolumeTotal;
	///��������
	TZQThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TZQThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
	///�����û�����
	TZQThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TZQThostFtdcOrderSysIDType	RelativeOrderSysID;
	///��������־
	TZQThostFtdcBoolType	IsSwapOrder;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
};

///�ɽ�
struct CZQThostFtdcTradeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TZQThostFtdcTradeIDType	TradeID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///���׽�ɫ
	TZQThostFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TZQThostFtdcPriceType	Price;
	///����
	TZQThostFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TZQThostFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TZQThostFtdcTimeType	TradeTime;
	///�ɽ�����
	TZQThostFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TZQThostFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///�ɽ���Դ
	TZQThostFtdcTradeSourceType	TradeSource;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
};

///��������
struct CZQThostFtdcOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��������Ϣ���
struct CZQThostFtdcExchangeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������
	TZQThostFtdcExchangeNameType	ExchangeName;
	///����������
	TZQThostFtdcExchangePropertyType	ExchangeProperty;
	///��ǰ������
	TZQThostFtdcDateType	TradingDay;
};

///ת�йܱ���
struct CZQThostFtdcCustodyTransferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����
	TZQThostFtdcVolumeType	Volume;
	///ת�뽻�׵�Ԫ
	TZQThostFtdcPbuIDType	InPbuID;
	///ת�й�����
	TZQThostFtdcCustodyTransferTypeType	CustodyTransferType;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TZQThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TZQThostFtdcOrderStatusType	OrderStatus;
	///��������
	TZQThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///�����û�����
	TZQThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///ת�йܲ���
struct CZQThostFtdcCustodyTransferActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///�ʽ�ת�ƻر�
struct CZQThostFtdcTransferFundField
{
	///CTPת����ˮ��
	TZQThostFtdcSerialType	CTPFundSerial;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�Ʒ���
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///�������
	TZQThostFtdcMoneyType	Amount;
	///ת��״̬
	TZQThostFtdcTransferStatusType	TransferStatus;
	///������Ա
	TZQThostFtdcUserIDType	OperatorID;
	///��������
	TZQThostFtdcDateType	OperateDate;
	///����ʱ��
	TZQThostFtdcTimeType	OperateTime;
};

///��λת�ƻر�
struct CZQThostFtdcTransferPositionField
{
	///CTP��λת����ˮ��
	TZQThostFtdcSerialType	CTPPositionSerial;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///֤ȯ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///������
	TZQThostFtdcDateType	TradingDay;
	///ת�Ʒ���
	TZQThostFtdcTransferDirectionType	TransferDirection;
	///ת�Ƴֲ�����
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
	///���ճֲ�����
	TZQThostFtdcVolumeType	HistoryVolume;
	///���������ֲ�����
	TZQThostFtdcVolumeType	TodayBSVolume;
	///��������ֲ�����
	TZQThostFtdcVolumeType	TodayPRVolume;
	///ת��״̬
	TZQThostFtdcTransferStatusType	TransferStatus;
	///������Ա
	TZQThostFtdcUserIDType	OperatorID;
	///��������
	TZQThostFtdcDateType	OperateDate;
	///����ʱ��
	TZQThostFtdcTimeType	OperateTime;
};

///�������֪ͨ
struct CZQThostFtdcDepthMarketDataField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TZQThostFtdcPriceType	LastPrice;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///������
	TZQThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TZQThostFtdcLargeVolumeType	PreOpenInterest;
	///����
	TZQThostFtdcPriceType	OpenPrice;
	///��߼�
	TZQThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TZQThostFtdcPriceType	LowestPrice;
	///����
	TZQThostFtdcLongVolumeType	Volume;
	///�ɽ����
	TZQThostFtdcMoneyType	Turnover;
	///�ֲ���
	TZQThostFtdcLargeVolumeType	OpenInterest;
	///������
	TZQThostFtdcPriceType	ClosePrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///��ͣ���
	TZQThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TZQThostFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TZQThostFtdcRatioType	PreDelta;
	///����ʵ��
	TZQThostFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TZQThostFtdcMillisecType	UpdateMillisec;
	///�����һ
	TZQThostFtdcPriceType	BidPrice1;
	///������һ
	TZQThostFtdcLongVolumeType	BidVolume1;
	///������һ
	TZQThostFtdcPriceType	AskPrice1;
	///������һ
	TZQThostFtdcLongVolumeType	AskVolume1;
	///����۶�
	TZQThostFtdcPriceType	BidPrice2;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume2;
	///�����۶�
	TZQThostFtdcPriceType	AskPrice2;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume2;
	///�������
	TZQThostFtdcPriceType	BidPrice3;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume3;
	///��������
	TZQThostFtdcPriceType	AskPrice3;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume3;
	///�������
	TZQThostFtdcPriceType	BidPrice4;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume4;
	///��������
	TZQThostFtdcPriceType	AskPrice4;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume4;
	///�������
	TZQThostFtdcPriceType	BidPrice5;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume5;
	///��������
	TZQThostFtdcPriceType	AskPrice5;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume5;
	///���վ���
	TZQThostFtdcPriceType	AveragePrice;
	///ҵ������
	TZQThostFtdcDateType	ActionDay;
	///��Լ����
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///�ɽ�����
	TZQThostFtdcLongVolumeType	TradingCount;
	///��ӯ��1
	TZQThostFtdcRatioType	PERatio1;
	///��ӯ��2
	TZQThostFtdcRatioType	PERatio2;
	///�۸�����1
	TZQThostFtdcPriceType	PriceUpDown1;
	///�۸�����2
	TZQThostFtdcPriceType	PriceUpDown2;
};

///���齻��������
struct CZQThostFtdcMarketDataExchangeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///�����������
struct CZQThostFtdcMarketDataBaseField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcPriceType	PreClosePrice;
	///��Լ����
	TZQThostFtdcInstrumentNameType	InstrumentName;
};

///���龲̬����
struct CZQThostFtdcMarketDataStaticField
{
	///����
	TZQThostFtdcPriceType	OpenPrice;
	///��߼�
	TZQThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TZQThostFtdcPriceType	LowestPrice;
	///��ͣ���
	TZQThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TZQThostFtdcPriceType	LowerLimitPrice;
};

///�������³ɽ�����
struct CZQThostFtdcMarketDataLastMatchField
{
	///���¼�
	TZQThostFtdcPriceType	LastPrice;
	///����
	TZQThostFtdcLongVolumeType	Volume;
	///�ɽ����
	TZQThostFtdcMoneyType	Turnover;
	///�ɽ�����
	TZQThostFtdcLongVolumeType	TradingCount;
	///��ӯ��1
	TZQThostFtdcRatioType	PERatio1;
	///��ӯ��2
	TZQThostFtdcRatioType	PERatio2;
	///�۸�����1
	TZQThostFtdcPriceType	PriceUpDown1;
	///�۸�����2
	TZQThostFtdcPriceType	PriceUpDown2;
	///�ֲ���
	TZQThostFtdcLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CZQThostFtdcMarketDataBestPriceField
{
	///�����һ
	TZQThostFtdcPriceType	BidPrice1;
	///������һ
	TZQThostFtdcLongVolumeType	BidVolume1;
	///������һ
	TZQThostFtdcPriceType	AskPrice1;
	///������һ
	TZQThostFtdcLongVolumeType	AskVolume1;
};

///�����������������
struct CZQThostFtdcMarketDataBid23Field
{
	///����۶�
	TZQThostFtdcPriceType	BidPrice2;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume2;
	///�������
	TZQThostFtdcPriceType	BidPrice3;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume3;
};

///������������������
struct CZQThostFtdcMarketDataAsk23Field
{
	///�����۶�
	TZQThostFtdcPriceType	AskPrice2;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume2;
	///��������
	TZQThostFtdcPriceType	AskPrice3;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume3;
};

///���������ġ�������
struct CZQThostFtdcMarketDataBid45Field
{
	///�������
	TZQThostFtdcPriceType	BidPrice4;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume4;
	///�������
	TZQThostFtdcPriceType	BidPrice5;
	///��������
	TZQThostFtdcLongVolumeType	BidVolume5;
};

///���������ġ�������
struct CZQThostFtdcMarketDataAsk45Field
{
	///��������
	TZQThostFtdcPriceType	AskPrice4;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume4;
	///��������
	TZQThostFtdcPriceType	AskPrice5;
	///��������
	TZQThostFtdcLongVolumeType	AskVolume5;
};

///�������ʱ������
struct CZQThostFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TZQThostFtdcMillisecType	UpdateMillisec;
};

///��ѯ������
struct CZQThostFtdcQryExchangeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ����
struct CZQThostFtdcQryDepthMarketDataField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ֤ȯ
struct CZQThostFtdcQrySecurityField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��������Լ����
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
};

///֤ȯ
struct CZQThostFtdcSecurityField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///�г�����
	TZQThostFtdcMarketIDType	MarketID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///֤ȯ������
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///�걨��λ
	TZQThostFtdcOrderUnitType	OrderUnit;
	///���뽻�׵�λ
	TZQThostFtdcTradingUnitType	BuyTradingUnit;
	///�������׵�λ
	TZQThostFtdcTradingUnitType	SellTradingUnit;
	///�м۵�������µ���
	TZQThostFtdcVolumeType	MaxMarketOrderBuyVolume;
	///�м۵�����С�µ���
	TZQThostFtdcVolumeType	MinMarketOrderBuyVolume;
	///�޼۵�������µ���
	TZQThostFtdcVolumeType	MaxLimitOrderBuyVolume;
	///�޼۵�����С�µ���
	TZQThostFtdcVolumeType	MinLimitOrderBuyVolume;
	///�м۵�������µ���
	TZQThostFtdcVolumeType	MaxMarketOrderSellVolume;
	///�м۵�����С�µ���
	TZQThostFtdcVolumeType	MinMarketOrderSellVolume;
	///�޼۵�������µ���
	TZQThostFtdcVolumeType	MaxLimitOrderSellVolume;
	///�޼۵�����С�µ���
	TZQThostFtdcVolumeType	MinLimitOrderSellVolume;
	///��������
	TZQThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TZQThostFtdcPriceTickType	PriceTick;
	///������
	TZQThostFtdcDateType	OpenDate;
	///�ֲ�����
	TZQThostFtdcPositionTypeType	PositionType;
	///��ֵ
	TZQThostFtdcSecurityValueType	SecurityValue;
	///֤ȯ״̬
	TZQThostFtdcStatusFlagType	SecurityStatusFlag;
	///ծȯӦ����Ϣ
	TZQThostFtdcInterestType	BondInterest;
	///������
	TZQThostFtdcRatioType	ConversionRate;
};

///��ѯETF�嵥
struct CZQThostFtdcQryETFFileField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF��Լ����
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///ETF�������
	TZQThostFtdcInstrumentIDType	ETFCreRedInstrumentID;
};

///ETF�嵥
struct CZQThostFtdcETFFileField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF���״���
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///ETF�������
	TZQThostFtdcInstrumentIDType	ETFCreRedInstrumentID;
	///��С�깺��ص�λ����
	TZQThostFtdcVolumeType	CreationRedemptionUnit;
	///����ֽ��������
	TZQThostFtdcRatioType	Maxcashratio;
	///�Ƿ������깺
	TZQThostFtdcBoolType	CreationStatus;
	///�Ƿ��������
	TZQThostFtdcBoolType	RedemptionStatus;
	///Ԥ���ֽ���
	TZQThostFtdcMoneyType	EstimateCashComponent;
	///ǰһ�������ֽ���
	TZQThostFtdcMoneyType	CashComponent;
	///ǰһ�����ջ���λ��ֵ
	TZQThostFtdcMoneyType	NAV;
	///ǰһ�����������׼��λ��ֵ
	TZQThostFtdcMoneyType	NAVperCU;
	///�����깺��ػ�׼��λ�ĺ������
	TZQThostFtdcMoneyType	DividendPerCU;
};

///��ѯETF�ɷ�֤ȯ
struct CZQThostFtdcQryETFBasketField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF��Լ����
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///�ɷֺ�Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///ETF�ɷ�֤ȯ
struct CZQThostFtdcETFBasketField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ETF���״���
	TZQThostFtdcInstrumentIDType	ETFInstrumentID;
	///ETF�ɷ�֤ȯ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///֤ȯ���
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///֤ȯ����
	TZQThostFtdcVolumeType	Volume;
	///�����־
	TZQThostFtdcETFCurrenceReplaceStatusType	ETFCurrenceReplaceStatus;
	///��۱���
	TZQThostFtdcRatioType	Premium;
	///�깺������
	TZQThostFtdcMoneyType	CreationReplaceAmount;
	///���������
	TZQThostFtdcMoneyType	RedemptionReplaceAmount;
	///�����г�
	TZQThostFtdcListingMarketType	Market;
};

///��ѯ�¹�
struct CZQThostFtdcQrySubscribingSharesField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�깺����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///�¹�
struct CZQThostFtdcSubscribingSharesField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�깺����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///�г�����
	TZQThostFtdcMarketIDType	MarketID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///֤ȯ������
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///�����깺����
	TZQThostFtdcVolumeType	OnlineLimit;
	///���м۸�
	TZQThostFtdcPriceType	Price;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
};

///��ѯ��Ѻ�걨����
struct CZQThostFtdcQryPledgeOrderInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��Ѻ�걨����
struct CZQThostFtdcPledgeOrderInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Ѻ�걨����
	TZQThostFtdcInstrumentIDType	PledgeOrderID;
	///��׼ȯ����
	TZQThostFtdcInstrumentIDType	StandardBondID;
};

///��ѯ�г�
struct CZQThostFtdcQryMarketField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�г�����
	TZQThostFtdcMarketIDType	MarketID;
};

///�г�
struct CZQThostFtdcMarketField
{
	///�г�����
	TZQThostFtdcMarketIDType	MarketID;
	///�г�����
	TZQThostFtdcNameType	MarketName;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ֤ȯƷ��
struct CZQThostFtdcQrySecurityProductField
{
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///֤ȯƷ��
struct CZQThostFtdcSecurityProductField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///��Ʒ����
	TZQThostFtdcProductNameType	ProductName;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
};

///��ѯ֤ȯ���
struct CZQThostFtdcQrySecurityClassField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///֤ȯ������
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
};

///֤ȯ���
struct CZQThostFtdcSecurityClassField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///֤ȯ������
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///֤ȯ�������
	TZQThostFtdcNameType	SecurityClassName;
};

///��ѯ�û�Ȩ��
struct CZQThostFtdcQryUserFunctionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///�û�Ȩ��
struct CZQThostFtdcUserFunctionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///���ܴ���
	TZQThostFtdcFunctionIDType	FunctionID;
	///��������
	TZQThostFtdcNameType	FunctionName;
};

///��ѯ����
struct CZQThostFtdcQryOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///��ѯ��������
struct CZQThostFtdcQryOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ�ɽ�
struct CZQThostFtdcQryTradeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TZQThostFtdcTradeIDType	TradeID;
	///��ʼʱ��
	TZQThostFtdcTimeType	TradeTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	TradeTimeEnd;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///��ѯ�ʽ��˻�
struct CZQThostFtdcQryTradingAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�ʽ��˻�����Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
};

///�ʽ��˻�
struct CZQThostFtdcTradingAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
	///�����ʽ�
	TZQThostFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TZQThostFtdcMoneyType	WithdrawQuota;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///�����
	TZQThostFtdcMoneyType	Deposit;
	///������
	TZQThostFtdcMoneyType	Withdraw;
	///����ı�֤��
	TZQThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TZQThostFtdcMoneyType	FrozenCash;
	///�����������
	TZQThostFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TZQThostFtdcMoneyType	CurrMargin;
	///������
	TZQThostFtdcMoneyType	Commission;
};

///��ѯͶ����֤ȯ�ֲ�
struct CZQThostFtdcQryInvestorSecurityPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///Ͷ����֤ȯ�ֲ�
struct CZQThostFtdcInvestorSecurityPositionField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///������
	TZQThostFtdcDateType	TradingDay;
	///�ֲֶ�շ���
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TZQThostFtdcPositionVolumeType	HistoryPosition;
	///���ճֲֶ���
	TZQThostFtdcPositionVolumeType	HistoryFrozen;
	///���������ֲ�
	TZQThostFtdcPositionVolumeType	TodayBSPosition;
	///���������ֲֶ���
	TZQThostFtdcPositionVolumeType	TodayBSFrozen;
	///��������ֲ�
	TZQThostFtdcPositionVolumeType	TodayPRPosition;
	///��������ֲֶ���
	TZQThostFtdcPositionVolumeType	TodayPRFrozen;
	///�ֲֳɱ�
	TZQThostFtdcMoneyType	PositionCost;
};

///��ѯͶ������Ѻ�ֲ�
struct CZQThostFtdcQryInvestorPledgePositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///Ͷ������Ѻ�ֲ�
struct CZQThostFtdcInvestorPledgePositionField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���֤ȯ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Ѻ�걨����
	TZQThostFtdcInstrumentIDType	PledgeOrderID;
	///��׼ȯ����
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///�������ֲ�
	TZQThostFtdcPositionVolumeType	HisPledgePos;
	///�������ֲֶ���
	TZQThostFtdcPositionVolumeType	HisPledgePosFrozen;
	///�������ֲ�
	TZQThostFtdcPositionVolumeType	TodayPledgePos;
	///�������ֲֶ���
	TZQThostFtdcPositionVolumeType	TodayPledgePosFrozen;
};

///��ѯͶ������Ѻ�ع�
struct CZQThostFtdcQryInvestorPledgeInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��׼ȯ����
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///Ͷ������Ѻ�ع�
struct CZQThostFtdcInvestorPledgeInfoField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��׼ȯ����
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///��������
	TZQThostFtdcPositionVolumeType	PurchaseVol;
	///���ʽ��
	TZQThostFtdcMoneyType	PurchaseAmt;
	///��ȯ����
	TZQThostFtdcPositionVolumeType	ReversePurVol;
	///��ȯ���
	TZQThostFtdcMoneyType	ReversePurAmt;
	///δ�ɽ���������
	TZQThostFtdcPositionVolumeType	NoTradePurchaseVol;
	///δ�ɽ����ʽ��
	TZQThostFtdcMoneyType	NoTradePurchaseAmt;
	///δ�ɽ���ȯ����
	TZQThostFtdcPositionVolumeType	NoTradeReversePurVol;
	///δ�ɽ���ȯ���
	TZQThostFtdcMoneyType	NoTradeReversePurAmt;
};

///��ѯ�����ʽ���ϸ
struct CZQThostFtdcQryOrderFundDetailField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///�����ʽ���ϸ
struct CZQThostFtdcOrderFundDetailField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������
	TZQThostFtdcDateType	TradingDay;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
	///��ʼ������
	TZQThostFtdcMoneyType	TotalFrozen;
	///�ܷ���
	TZQThostFtdcMoneyType	TotalFee;
	///�ɽ����
	TZQThostFtdcMoneyType	Turnover;
};

///��ѯͶ����
struct CZQThostFtdcQryInvestorField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///Ͷ����
struct CZQThostFtdcInvestorField
{
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ��������
	TZQThostFtdcNameType	InvestorName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
	///��ϵ�绰
	TZQThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TZQThostFtdcAddressType	Address;
	///��������
	TZQThostFtdcDateType	OpenDate;
	///�ֻ�
	TZQThostFtdcMobileType	Mobile;
	///Ӷ��ģ�����
	TZQThostFtdcTemplateNoType	BrokerageTemplateNo;
	///������ȨӶ��ģ�����
	TZQThostFtdcTemplateNoType	SecurityOptionTemplateNo;
	///��֤��ģ�����
	TZQThostFtdcTemplateNoType	MarginTemplateNo;
};

///��ѯ�����˻�
struct CZQThostFtdcQryTradingCodeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///���ױ�������
	TZQThostFtdcClientIDTypeType	ClientIDType;
};

///�����˻�
struct CZQThostFtdcTradingCodeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
	///���ױ�������
	TZQThostFtdcClientIDTypeType	ClientIDType;
	///�г�����
	TZQThostFtdcMarketIDType	MarketID;
	///������Ӫҵ������
	TZQThostFtdcBranchIDType	BranchID;
};

///��ѯͶ�ʵ�Ԫ
struct CZQThostFtdcQryInvestUnitField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///Ͷ�ʵ�Ԫ
struct CZQThostFtdcInvestUnitField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcNameType	InvestUnitName;
};

///��ѯͶ�ʵ�Ԫ�뽻���ʽ��˻���ϵ
struct CZQThostFtdcQryInvestUnitAndTradingAcctField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
};

///Ͷ�ʵ�Ԫ�뽻���ʽ��˻���ϵ
struct CZQThostFtdcInvestUnitAndTradingAcctField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
};

///��ѯͶ�����û���Ͷ�ʵ�Ԫ��ϵ
struct CZQThostFtdcQryInvestUnitAndUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����û�����
	TZQThostFtdcUserIDType	UserID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///Ͷ�����û���Ͷ�ʵ�Ԫ��ϵ
struct CZQThostFtdcInvestUnitAndUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///��ѯͶ����Ӷ��
struct CZQThostFtdcQryBrokerageField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ӷ��ģ�����
	TZQThostFtdcTemplateNoType	BrokerageTemplateNo;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///Ͷ����Ӷ��
struct CZQThostFtdcBrokerageField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ӷ��ģ�����
	TZQThostFtdcTemplateNoType	BrokerageTemplateNo;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///֤ȯ������
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///ҵ�����
	TZQThostFtdcBizClassType	BizClass;
	///Ӷ������
	TZQThostFtdcBrokerageTypeType	BrokerageType;
	///Ӷ�𰴽����ȡ����
	TZQThostFtdcRatioType	RatioByAmt;
	///Ӷ����ֵ��ȡ����
	TZQThostFtdcRatioType	RatioByPar;
	///Ӷ�𰴱���ȡ���
	TZQThostFtdcMoneyType	FeePerOrder;
	///Ӷ�������ȡ���
	TZQThostFtdcMoneyType	FeeMin;
	///Ӷ�������ȡ���
	TZQThostFtdcMoneyType	FeeMax;
	///Ӷ��������ȡ���
	TZQThostFtdcMoneyType	FeeByVolume;
};

///��ѯ�¹��깺���
struct CZQThostFtdcQrySubscribingSharesQuotaField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
};

///�¹��깺���
struct CZQThostFtdcSubscribingSharesQuotaField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///���깺���
	TZQThostFtdcVolumeType	MaxVolume;
};

///��ѯ��׼ȯʹ����
struct CZQThostFtdcQryRepoRatioField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��׼ȯ����
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��׼ȯʹ����
struct CZQThostFtdcRepoRatioField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��׼ȯ����
	TZQThostFtdcInstrumentIDType	StandardBondID;
	///��׼ȯʹ����
	TZQThostFtdcRatioType	StandardUseRatio;
};

///��ѯ�ع��Ŵ���
struct CZQThostFtdcQryRepurchaseMaxTimesField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///�ع��Ŵ���
struct CZQThostFtdcRepurchaseMaxTimesField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ع��Ŵ���
	TZQThostFtdcRepurchaseMaxTimesType	RepurchaseMaxTimes;
};

///��ѯ�ʽ�ת��
struct CZQThostFtdcQryTransferFundField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�ʽ��˻�����
	TZQThostFtdcAccountIDType	AccountID;
	///CTPת����ˮ��
	TZQThostFtdcSerialType	CTPFundSerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
};

///��ѯ��λת��
struct CZQThostFtdcQryTransferPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///CTP��λת����ˮ��
	TZQThostFtdcSerialType	CTPPositionSerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
};

///��ѯ���͹�˾�û���Ͷ���߹�ϵ
struct CZQThostFtdcQryBrokerUserAndInvestorField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���͹�˾�û�����
	TZQThostFtdcUserIDType	UserID;
};

///���͹�˾�û���Ͷ���߹�ϵ
struct CZQThostFtdcBrokerUserAndInvestorField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///��ѯ���͹�˾
struct CZQThostFtdcQryBrokerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///���͹�˾
struct CZQThostFtdcBrokerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���͹�˾���
	TZQThostFtdcBrokerAbbrType	BrokerAbbr;
	///���͹�˾����
	TZQThostFtdcNameType	BrokerName;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///��ѯ����
struct CZQThostFtdcQryDepartmentField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���͹�˾���Ŵ���
	TZQThostFtdcDepartmentIDType	DepartmentID;
};

///����
struct CZQThostFtdcDepartmentField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���͹�˾���Ŵ���
	TZQThostFtdcDepartmentIDType	DepartmentID;
	///���͹�˾��������
	TZQThostFtdcNameType	DepartmentName;
};

///��ѯ�������׷���
struct CZQThostFtdcQryBasicTradingFeeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///�������׷���
struct CZQThostFtdcBasicTradingFeeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///֤ȯ������
	TZQThostFtdcSecurityClassIDType	SecurityClassID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///ҵ�����
	TZQThostFtdcBizClassType	BizClass;
	///ӡ��˰�������ȡ����
	TZQThostFtdcRatioType	StampTaxRatioByAmt;
	///ӡ��˰����ֵ��ȡ����
	TZQThostFtdcRatioType	StampTaxRatioByPar;
	///ӡ��˰������ȡ���
	TZQThostFtdcMoneyType	StampTaxFeePerOrder;
	///ӡ��˰�����ȡ���
	TZQThostFtdcMoneyType	StampTaxFeeMin;
	///ӡ��˰�����ȡ���
	TZQThostFtdcMoneyType	StampTaxFeeMax;
	///�����Ѱ������ȡ����
	TZQThostFtdcRatioType	TransferRatioByAmt;
	///�����Ѱ���ֵ��ȡ����
	TZQThostFtdcRatioType	TransferRatioByPar;
	///�����Ѱ�����ȡ���
	TZQThostFtdcMoneyType	TransferFeePerOrder;
	///�����������ȡ���
	TZQThostFtdcMoneyType	TransferFeeMin;
	///�����������ȡ���
	TZQThostFtdcMoneyType	TransferFeeMax;
	///���ַѰ������ȡ����
	TZQThostFtdcRatioType	HandlingRatioByAmt;
	///���ַѰ���ֵ��ȡ����
	TZQThostFtdcRatioType	HandlingRatioByPar;
	///���ַѰ�����ȡ���
	TZQThostFtdcMoneyType	HandlingFeePerOrder;
	///���ַ������ȡ���
	TZQThostFtdcMoneyType	HandlingFeeMin;
	///���ַ������ȡ���
	TZQThostFtdcMoneyType	HandlingFeeMax;
	///֤�ܷѰ������ȡ����
	TZQThostFtdcRatioType	RegulateRatioByAmt;
	///֤�ܷѰ���ֵ��ȡ����
	TZQThostFtdcRatioType	RegulateRatioByPar;
	///֤�ܷѰ�����ȡ���
	TZQThostFtdcMoneyType	RegulateFeePerOrder;
	///֤�ܷ������ȡ���
	TZQThostFtdcMoneyType	RegulateFeeMin;
	///֤�ܷ������ȡ���
	TZQThostFtdcMoneyType	RegulateFeeMax;
	///�����Ѱ�������ȡ���
	TZQThostFtdcMoneyType	TransferFeeByVolume;
	///���ַѰ�������ȡ���
	TZQThostFtdcMoneyType	HandlingFeeByVolume;
	///����Ѱ������ȡ����
	TZQThostFtdcRatioType	SettlementRatioByAmt;
	///����Ѱ���ֵ��ȡ����
	TZQThostFtdcRatioType	SettlementRatioByPar;
	///����Ѱ�����ȡ���
	TZQThostFtdcMoneyType	SettlementFeePerOrder;
	///����Ѱ�������ȡ���
	TZQThostFtdcMoneyType	SettlementFeeByVolume;
	///����������ȡ���
	TZQThostFtdcMoneyType	SettlementFeeMin;
	///����������ȡ���
	TZQThostFtdcMoneyType	SettlementFeeMax;
	///ϵͳ��ʶ
	TZQThostFtdcSystemFlagType	SystemFlag;
};

///��ѯ�û��Ự
struct CZQThostFtdcQryUserSessionField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///�û��Ự
struct CZQThostFtdcUserSessionField
{
	///��¼ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///��¼�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��¼����
	TZQThostFtdcDateType	LoginDate;
	///��¼ʱ��
	TZQThostFtdcTimeType	LoginTime;
	///��¼IP��ַ
	TZQThostFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///��¼Mac��ַ
	TZQThostFtdcMacAddressType	MacAddress;
};

///��ѯ�û�
struct CZQThostFtdcQryUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û�����
	TZQThostFtdcUserTypeType	UserType;
};

///�û�
struct CZQThostFtdcUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û�����
	TZQThostFtdcUserNameType	UserName;
	///�û�����
	TZQThostFtdcUserTypeType	UserType;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
	///��¼����
	TZQThostFtdcLoginLimitType	LoginLimit;
	///ÿ����󱨵���
	TZQThostFtdcPerSecondOrdersType	PerSecondOrders;
};

///��ѯ����������Ա���̻���Ϣ
struct CZQThostFtdcQryTraderOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///����������Ա���̻���Ϣ
struct CZQThostFtdcTraderOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///ͨ���ֶ�3
	TZQThostFtdcCommStringType	CommString3;
	///��ǰ���ɽ����
	TZQThostFtdcSequenceNoType	CurrTradeNo;
	///��ǰ����걨ȷ�ϱ��
	TZQThostFtdcSequenceNoType	CurrOrderConfirmNo;
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///����������Ա����״̬
	TZQThostFtdcConnectStatusType	TraderConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///���½���������Ա���̻���Ϣ
struct CZQThostFtdcUpdTraderOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///ͨ���ֶ�3
	TZQThostFtdcCommStringType	CommString3;
	///��ǰ���ɽ����
	TZQThostFtdcSequenceNoType	CurrTradeNo;
	///��ǰ����걨ȷ�ϱ��
	TZQThostFtdcSequenceNoType	CurrOrderConfirmNo;
};

///��ѯ���͹�˾���鱨����Ϣ
struct CZQThostFtdcQryBrokerMdServerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///���͹�˾���鱨����Ϣ
struct CZQThostFtdcBrokerMdServerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
};

///���¾��͹�˾���鱨����Ϣ
struct CZQThostFtdcUpdBrokerMdServerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
};

///��ѯ���������鱨����Ϣ
struct CZQThostFtdcQryExchangeMdServerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///���������鱨����Ϣ
struct CZQThostFtdcExchangeMdServerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///���������鱨������״̬
	TZQThostFtdcConnectStatusType	MdConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///�л����������鱨����Ϣ
struct CZQThostFtdcChgExchangeMdServerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯDbmt��Ϣ
struct CZQThostFtdcQryDbmtField
{
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
};

///Dbmt��Ϣ
struct CZQThostFtdcDbmtField
{
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///��ǰ���Dbmt���
	TZQThostFtdcSequenceNoType	CurrDbmtNo;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///Dbmt����״̬
	TZQThostFtdcConnectStatusType	DbmtConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///����Dbmt��Ϣ
struct CZQThostFtdcUpdDbmtField
{
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///��ǰ���Dbmt���
	TZQThostFtdcSequenceNoType	CurrDbmtNo;
};

///��ѯDbwriter��Ϣ
struct CZQThostFtdcQryDbwriterField
{
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
};

///Dbwriter��Ϣ
struct CZQThostFtdcDbwriterField
{
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///Dbwriter����״̬
	TZQThostFtdcConnectStatusType	DbwriterConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///����Dbwriter��Ϣ
struct CZQThostFtdcUpdDbwriterField
{
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
};

///��ѯ������Ȩ����������Ա���̻���Ϣ
struct CZQThostFtdcQrySoptTraderOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///������Ȩ����������Ա���̻���Ϣ
struct CZQThostFtdcSoptTraderOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///ͨ���ֶ�3
	TZQThostFtdcCommStringType	CommString3;
	///��ǰ���ɽ����
	TZQThostFtdcSequenceNoType	CurrTradeNo;
	///��ǰ����걨ȷ�ϱ��
	TZQThostFtdcSequenceNoType	CurrOrderConfirmNo;
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///����������Ա����״̬
	TZQThostFtdcConnectStatusType	TraderConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///���¸�����Ȩ����������Ա���̻���Ϣ
struct CZQThostFtdcUpdSoptTraderOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��������
	TZQThostFtdcConnectTypeType	ConnectType;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///ͨ���ֶ�3
	TZQThostFtdcCommStringType	CommString3;
	///��ǰ���ɽ����
	TZQThostFtdcSequenceNoType	CurrTradeNo;
	///��ǰ����걨ȷ�ϱ��
	TZQThostFtdcSequenceNoType	CurrOrderConfirmNo;
};

///��ѯ���͹�˾������Ȩ���鱨����Ϣ
struct CZQThostFtdcQryBrokerSoptMdServerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///���͹�˾�и�����Ȩ�鱨����Ϣ
struct CZQThostFtdcBrokerSoptMdServerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
};

///���¾��͹�˾������Ȩ���鱨����Ϣ
struct CZQThostFtdcUpdBrokerSoptMdServerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
};

///��ѯ������������Ȩ���鱨����Ϣ
struct CZQThostFtdcQryExchangeSoptMdServerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///������������Ȩ���鱨����Ϣ
struct CZQThostFtdcExchangeSoptMdServerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///ͨ���ֶ�1
	TZQThostFtdcCommStringType	CommString1;
	///ͨ���ֶ�2
	TZQThostFtdcCommStringType	CommString2;
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///���������鱨������״̬
	TZQThostFtdcConnectStatusType	MdConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///�л�������������Ȩ���鱨����Ϣ
struct CZQThostFtdcChgExchangeSoptMdServerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///����֤ȯ������Ϣ
struct CZQThostFtdcUpdSecurityOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����ϵͳ
	TZQThostFtdcConnectSystemType	ConnectSystem;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
};

///��ѯת�йܱ���
struct CZQThostFtdcQryCustodyTransferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///��ѯת�йܲ���
struct CZQThostFtdcQryCustodyTransferActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///��Ȩ����
struct CZQThostFtdcInputExecOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Ȩ����
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Ȩ����
	TZQThostFtdcVolumeType	Volume;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///ִ������
	TZQThostFtdcExecOrderActionTypeType	ActionType;
	///������ͷ����ĳֲַ���
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
	TZQThostFtdcReservePositionFlagType	ReservePositionFlag;
	///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
	TZQThostFtdcCloseFlagType	CloseFlag;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	AccountID;
};

///��Ȩ
struct CZQThostFtdcExecOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Ȩ����
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Ȩ����
	TZQThostFtdcVolumeType	Volume;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///ִ������
	TZQThostFtdcExecOrderActionTypeType	ActionType;
	///������ͷ����ĳֲַ���
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
	TZQThostFtdcReservePositionFlagType	ReservePositionFlag;
	///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
	TZQThostFtdcCloseFlagType	CloseFlag;
	///������Ȩ���
	TZQThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///ϵͳ��Ȩ���
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///�걨����
	TZQThostFtdcDateType	InsertDate;
	///�걨ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///ִ�н��
	TZQThostFtdcExecResultType	ExecResult;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///�����û�����
	TZQThostFtdcUserIDType	ActiveUserID;
	///���͹�˾��Ȩ���
	TZQThostFtdcSequenceNoType	BrokerExecOrderSeq;
	///������Ӫҵ������
	TZQThostFtdcBranchIDType	BranchID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	AccountID;
};

///��Ȩ��������
struct CZQThostFtdcInputExecOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Ȩ��������
	TZQThostFtdcOrderActionRefType	ExecOrderActionRef;
	///��Ȩ����
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ϵͳ��Ȩ���
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��������
struct CZQThostFtdcInputLockField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	LockRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��������
	TZQThostFtdcVolumeType	Volume;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������
	TZQThostFtdcLockTypeType	LockType;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///����
struct CZQThostFtdcLockField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	LockRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��������
	TZQThostFtdcVolumeType	Volume;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������
	TZQThostFtdcLockTypeType	LockType;
	///�����������
	TZQThostFtdcOrderLocalIDType	LockLocalID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///ϵͳ�������
	TZQThostFtdcOrderSysIDType	LockSysID;
	///�걨����
	TZQThostFtdcDateType	InsertDate;
	///�걨ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///����״̬
	TZQThostFtdcOrderStatusType	OrderStatus;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///�����û�����
	TZQThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerLockSeq;
	///������Ӫҵ������
	TZQThostFtdcBranchIDType	BranchID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///������������
struct CZQThostFtdcInputLockActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	LockActionRef;
	///��������
	TZQThostFtdcOrderRefType	LockRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ϵͳ��Ȩ���
	TZQThostFtdcOrderSysIDType	LockSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��Ȩ����
struct CZQThostFtdcExecOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Ȩ��������
	TZQThostFtdcOrderActionRefType	ExecOrderActionRef;
	///��Ȩ����
	TZQThostFtdcOrderRefType	ExecOrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ϵͳ��Ȩ���
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///������Ȩ���
	TZQThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///���ز������
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///ִ������
	TZQThostFtdcExecOrderActionTypeType	ActionType;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///������Ӫҵ������
	TZQThostFtdcBranchIDType	BranchID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��������
struct CZQThostFtdcLockActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	LockActionRef;
	///��������
	TZQThostFtdcOrderRefType	LockRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TZQThostFtdcOrderSysIDType	LockSysID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����������
	TZQThostFtdcOrderLocalIDType	LockLocalID;
	///���ز������
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ȯת������
struct CZQThostFtdcInputSecurityTransferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///��ȯϵͳͶ���ߴ���
	TZQThostFtdcInvestorIDType	SecurityInvestorID;
	///��ȯϵͳͶ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	SecurityInvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///��ȯת�Ʒ���
	TZQThostFtdcSecurityTransferDirectionType	SecurityTransferDirection;
	///����
	TZQThostFtdcVolumeType	Volume;
	///ת�Ƴֲ�����
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
};

///��ȯת��
struct CZQThostFtdcSecurityTransferField
{
	///��ȯת����ˮ��
	TZQThostFtdcSerialType	SecurityTransferSerial;
	///������ˮ��
	TZQThostFtdcExternalSerialType	ApplySerial;
	///֤ȯϵͳ��λת����ˮ��
	TZQThostFtdcSerialType	SecurityPositionSerial;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///��ȯϵͳͶ���ߴ���
	TZQThostFtdcInvestorIDType	SecurityInvestorID;
	///��ȯϵͳͶ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	SecurityInvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///ת�Ʒ���
	TZQThostFtdcSecurityTransferDirectionType	SecurityTransferDirection;
	///ת�Ƴֲ�����
	TZQThostFtdcTransferPositionTypeType	TransferPositionType;
	///���ղ�λת������
	TZQThostFtdcVolumeType	HistoryVolume;
	///����������λת������
	TZQThostFtdcVolumeType	TodayBSVolume;
	///���������λת������
	TZQThostFtdcVolumeType	TodayPRVolume;
	///ת��״̬
	TZQThostFtdcSecurityTransferStatusType	SecurityTransferStatus;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///������Ա
	TZQThostFtdcUserIDType	OperatorID;
	///��������
	TZQThostFtdcDateType	OperateDate;
	///����ʱ��
	TZQThostFtdcTimeType	OperateTime;
};

///������Ȩ��Լ��ѯ
struct CZQThostFtdcQryInstrumentField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
};

///������Ȩ��Լ��ѯ��Ӧ
struct CZQThostFtdcInstrumentField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///��Լ���״���
	TZQThostFtdcInstrumentIDType	ExchangeInstID;
	///��Ʒ����
	TZQThostFtdcProductIDType	ProductID;
	///��Ʒ����
	TZQThostFtdcProductClassType	ProductClass;
	///�������
	TZQThostFtdcYearType	DeliveryYear;
	///�����·�
	TZQThostFtdcMonthType	DeliveryMonth;
	///�м۵�������µ���
	TZQThostFtdcVolumeType	MaxMarketOrderBuyVolume;
	///�м۵�����С�µ���
	TZQThostFtdcVolumeType	MinMarketOrderBuyVolume;
	///�޼۵�������µ���
	TZQThostFtdcVolumeType	MaxLimitOrderBuyVolume;
	///�޼۵�����С�µ���
	TZQThostFtdcVolumeType	MinLimitOrderBuyVolume;
	///�м۵�������µ���
	TZQThostFtdcVolumeType	MaxMarketOrderSellVolume;
	///�м۵�����С�µ���
	TZQThostFtdcVolumeType	MinMarketOrderSellVolume;
	///�޼۵�������µ���
	TZQThostFtdcVolumeType	MaxLimitOrderSellVolume;
	///�޼۵�����С�µ���
	TZQThostFtdcVolumeType	MinLimitOrderSellVolume;
	///��Լ����
	TZQThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TZQThostFtdcPriceTickType	PriceTick;
	///������
	TZQThostFtdcDateType	CreateDate;
	///������
	TZQThostFtdcDateType	OpenDate;
	///������
	TZQThostFtdcDateType	ExpireDate;
	///��ʼ������
	TZQThostFtdcDateType	StartDelivDate;
	///����������
	TZQThostFtdcDateType	EndDelivDate;
	///��Լ��������״̬
	TZQThostFtdcInstLifePhaseType	InstLifePhase;
	///��ǰ�Ƿ���
	TZQThostFtdcBoolType	IsTrading;
	///�ֲ�����
	TZQThostFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TZQThostFtdcPositionDateType	PositionDateType;
	///��ͷ��֤����
	TZQThostFtdcRatioType	LongMarginRatio;
	///��ͷ��֤����
	TZQThostFtdcRatioType	ShortMarginRatio;
	///�Ƿ�ʹ�ô��߱�֤���㷨
	TZQThostFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	///������Ʒ����
	TZQThostFtdcInstrumentIDType	UnderlyingInstrID;
	///ִ�м�
	TZQThostFtdcPriceType	StrikePrice;
	///��Ȩ����
	TZQThostFtdcOptionsTypeType	OptionsType;
	///��Լ������Ʒ����
	TZQThostFtdcVolumeMultipleType	UnderlyingMultiple;
	///�������
	TZQThostFtdcCombinationTypeType	CombinationType;
	///���뽻�׵�λ
	TZQThostFtdcTradingUnitType	BuyTradingUnit;
	///�������׵�λ
	TZQThostFtdcTradingUnitType	SellTradingUnit;
};

///������ѯ
struct CZQThostFtdcQryLockField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	LockSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///����������ѯ
struct CZQThostFtdcQryLockActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///ִ�������ѯ
struct CZQThostFtdcQryExecOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///ִ��������
	TZQThostFtdcOrderSysIDType	ExecOrderSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///ִ�����������ѯ
struct CZQThostFtdcQryExecOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///�����ֲֲ�ѯ
struct CZQThostFtdcQryLockPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///�����ֲֲ�ѯ��Ӧ
struct CZQThostFtdcLockPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����
	TZQThostFtdcVolumeType	Volume;
	///��������
	TZQThostFtdcVolumeType	FrozenVolume;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///Ͷ���߱�֤���ʲ�ѯ
struct CZQThostFtdcQryMarginRateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��֤��ģ�����
	TZQThostFtdcTemplateNoType	MarginTemplateNo;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///Ͷ���߱�֤���ʲ�ѯ��Ӧ
struct CZQThostFtdcMarginRateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��֤��ģ�����
	TZQThostFtdcTemplateNoType	MarginTemplateNo;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��ͷ��֤����
	TZQThostFtdcMoneyType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TZQThostFtdcMoneyType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
};

///Ͷ���������Ȳ�ѯ
struct CZQThostFtdcQryLimitAmountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///Ͷ���������Ȳ�ѯ��Ӧ
struct CZQThostFtdcLimitAmountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��ͷ����޶�
	TZQThostFtdcMoneyType	LongAmount;
	///��ͷ����
	TZQThostFtdcMoneyType	LongAmountFrozen;
};

///Ͷ���ֲ߳����Ʋ�ѯ
struct CZQThostFtdcQryLimitPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///Ͷ���ֲ߳����Ʋ�ѯ��Ӧ
struct CZQThostFtdcLimitPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������
	TZQThostFtdcVolumeType	TotalVolume;
	///��ͷ��������
	TZQThostFtdcVolumeType	LongVolume;
	///���տ�����������
	TZQThostFtdcVolumeType	OpenVolume;
	///����������
	TZQThostFtdcVolumeType	TotalVolumeFrozen;
	///��ͷ��������
	TZQThostFtdcVolumeType	LongVolumeFrozen;
	///���տ�����������
	TZQThostFtdcVolumeType	OpenVolumeFrozen;
};

///��Ȩָ�ɲ�ѯ
struct CZQThostFtdcQryExerciseAssignmentField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///��Ȩָ�ɲ�ѯ��Ӧ
struct CZQThostFtdcExerciseAssignmentField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///�����˻�����
	TZQThostFtdcClientIDType	ClientID;
	///��������
	TZQThostFtdcDateType	TradingDay;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Ȩָ������
	TZQThostFtdcVolumeType	AssignmentVolume;
};

///֤ȯ���̲�ѯ
struct CZQThostFtdcQrySecurityOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///֤ȯ���̲�ѯ��Ӧ
struct CZQThostFtdcSecurityOfferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����ϵͳ
	TZQThostFtdcConnectSystemType	ConnectSystem;
	///�����ַ���
	TZQThostFtdcConnectStringType	ConnectString;
	///�û���
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///Ӧ������
	TZQThostFtdcAppNameType	AppName;
	///����ID
	TZQThostFtdcRunIDType	RunID;
	///ǰ��ID
	TZQThostFtdcFrontIDType	FrontID;
	///�ỰID
	TZQThostFtdcSessionIDType	SessionID;
	///֤ȯ��������״̬
	TZQThostFtdcConnectStatusType	SoConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
};

///Ͷ���ߺ�Լ�ֲֲ�ѯ
struct CZQThostFtdcQryInvestorPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///Ͷ���ߺ�Լ�ֲֲ�ѯ��Ӧ
struct CZQThostFtdcInvestorPositionField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�ֲ���������
	TZQThostFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TZQThostFtdcVolumeType	YdPosition;
	///���ճֲ�
	TZQThostFtdcVolumeType	Position;
	///��ͷ����
	TZQThostFtdcVolumeType	LongFrozen;
	///��ͷ����
	TZQThostFtdcVolumeType	ShortFrozen;
	///��ͷ������
	TZQThostFtdcMoneyType	LongFrozenAmount;
	///��ͷ������
	TZQThostFtdcMoneyType	ShortFrozenAmount;
	///������
	TZQThostFtdcVolumeType	OpenVolume;
	///ƽ����
	TZQThostFtdcVolumeType	CloseVolume;
	///���ֽ��
	TZQThostFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TZQThostFtdcMoneyType	CloseAmount;
	///�ֲֳɱ�
	TZQThostFtdcMoneyType	PositionCost;
	///�ϴ�ռ�õı�֤��
	TZQThostFtdcMoneyType	PreMargin;
	///ռ�õı�֤��
	TZQThostFtdcMoneyType	UseMargin;
	///����ı�֤��
	TZQThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TZQThostFtdcMoneyType	FrozenCash;
	///�����������
	TZQThostFtdcMoneyType	FrozenCommission;
	///�ʽ���
	TZQThostFtdcMoneyType	CashIn;
	///������
	TZQThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TZQThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TZQThostFtdcMoneyType	PositionProfit;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TZQThostFtdcMoneyType	OpenCost;
	///��������֤��
	TZQThostFtdcPriceType	ExchangeMargin;
	///��ϳɽ��γɵĳֲ�
	TZQThostFtdcVolumeType	CombPosition;
	///��϶�ͷ����
	TZQThostFtdcVolumeType	CombLongFrozen;
	///��Ͽ�ͷ����
	TZQThostFtdcVolumeType	CombShortFrozen;
	///���ն���ƽ��ӯ��
	TZQThostFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TZQThostFtdcMoneyType	CloseProfitByTrade;
	///���ճֲ�
	TZQThostFtdcVolumeType	TodayPosition;
	///��֤����
	TZQThostFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TZQThostFtdcRatioType	MarginRateByVolume;
	///ִ�ж���
	TZQThostFtdcVolumeType	StrikeFrozen;
	///ִ�ж�����
	TZQThostFtdcMoneyType	StrikeFrozenAmount;
	///����ִ�ж���
	TZQThostFtdcVolumeType	AbandonFrozen;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
};

///��ȯת�Ʋ�ѯ
struct CZQThostFtdcQrySecurityTransferField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�ʵ�Ԫ����
	TZQThostFtdcInvestUnitIDType	InvestUnitID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��ȯת����ˮ��
	TZQThostFtdcSerialType	SecurityTransferSerial;
};


#endif
