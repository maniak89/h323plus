//
// H460pres.h
//
// Code automatically generated by asnparse.
//

#if ! H323_DISABLE_H460P

#ifndef __H460P_H
#define __H460P_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <ptclib/asner.h>

#include "h225.h"


//
// PresenceMessage
//

class H460P_PresenceStatus;
class H460P_PresenceInstruct;
class H460P_PresenceAuthorize;
class H460P_PresenceNotify;
class H460P_PresenceRequest;
class H460P_PresenceResponse;
class H460P_PresenceAlive;
class H460P_PresenceRemove;
class H460P_PresenceAlert;

class H460P_PresenceMessage : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceMessage, PASN_Choice);
#endif
  public:
    H460P_PresenceMessage(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_presenceStatus,
      e_presenceInstruct,
      e_presenceAuthorize,
      e_presenceNotify,
      e_presenceRequest,
      e_presenceResponse,
      e_presenceAlive,
      e_presenceRemove,
      e_presenceAlert
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceStatus &() const;
#else
    operator H460P_PresenceStatus &();
    operator const H460P_PresenceStatus &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceInstruct &() const;
#else
    operator H460P_PresenceInstruct &();
    operator const H460P_PresenceInstruct &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAuthorize &() const;
#else
    operator H460P_PresenceAuthorize &();
    operator const H460P_PresenceAuthorize &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceNotify &() const;
#else
    operator H460P_PresenceNotify &();
    operator const H460P_PresenceNotify &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceRequest &() const;
#else
    operator H460P_PresenceRequest &();
    operator const H460P_PresenceRequest &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceResponse &() const;
#else
    operator H460P_PresenceResponse &();
    operator const H460P_PresenceResponse &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAlive &() const;
#else
    operator H460P_PresenceAlive &();
    operator const H460P_PresenceAlive &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceRemove &() const;
#else
    operator H460P_PresenceRemove &();
    operator const H460P_PresenceRemove &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAlert &() const;
#else
    operator H460P_PresenceAlert &();
    operator const H460P_PresenceAlert &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresencePDU
//

class H460P_PresenceInstruction;
class H460P_PresenceNotification;
class H460P_PresenceSubscription;
class H460P_PresenceIdentifier;

class H460P_PresencePDU : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresencePDU, PASN_Choice);
#endif
  public:
    H460P_PresencePDU(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_instruction,
      e_notification,
      e_subscription,
      e_identifier
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceInstruction &() const;
#else
    operator H460P_PresenceInstruction &();
    operator const H460P_PresenceInstruction &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceNotification &() const;
#else
    operator H460P_PresenceNotification &();
    operator const H460P_PresenceNotification &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceSubscription &() const;
#else
    operator H460P_PresenceSubscription &();
    operator const H460P_PresenceSubscription &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceIdentifier &() const;
#else
    operator H460P_PresenceIdentifier &();
    operator const H460P_PresenceIdentifier &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresenceFeatureGeneric
//

class H460P_PresenceFeatureGeneric : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceFeatureGeneric, PASN_Sequence);
#endif
  public:
    H460P_PresenceFeatureGeneric(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_display
    };

    H225_GenericIdentifier m_identifier;
    PASN_IA5String m_display;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceFeature
//

class H460P_PresenceFeatureGeneric;

class H460P_PresenceFeature : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceFeature, PASN_Choice);
#endif
  public:
    H460P_PresenceFeature(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_audio,
      e_video,
      e_data,
      e_extVideo,
      e_generic
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceFeatureGeneric &() const;
#else
    operator H460P_PresenceFeatureGeneric &();
    operator const H460P_PresenceFeatureGeneric &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresenceDisplay
//

class H460P_PresenceDisplay : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceDisplay, PASN_Sequence);
#endif
  public:
    H460P_PresenceDisplay(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_language
    };

    PASN_IA5String m_language;
    PASN_BMPString m_display;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAlias
//

class H460P_PresenceAlias : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAlias, PASN_Sequence);
#endif
  public:
    H460P_PresenceAlias(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_display,
      e_avatar,
      e_category
    };

    H225_AliasAddress m_alias;
    H460P_PresenceDisplay m_display;
    PASN_IA5String m_avatar;
    H460P_PresenceFeature m_category;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceInstruction
//

class H460P_PresenceAlias;

class H460P_PresenceInstruction : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceInstruction, PASN_Choice);
#endif
  public:
    H460P_PresenceInstruction(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_subscribe,
      e_unsubscribe,
      e_block,
      e_unblock,
      e_pending
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAlias &() const;
#else
    operator H460P_PresenceAlias &();
    operator const H460P_PresenceAlias &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresenceIdentifier
//

class H460P_PresenceIdentifier : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceIdentifier, PASN_Sequence);
#endif
  public:
    H460P_PresenceIdentifier(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_remove
    };

    H225_GloballyUniqueID m_guid;
    PASN_Boolean m_remove;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceState
//

class H460P_ArrayOf_PresenceDisplay;

class H460P_PresenceState : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceState, PASN_Choice);
#endif
  public:
    H460P_PresenceState(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_hidden,
      e_available,
      e_online,
      e_offline,
      e_onCall,
      e_voiceMail,
      e_notAvailable,
      e_away,
      e_generic
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_ArrayOf_PresenceDisplay &() const;
#else
    operator H460P_ArrayOf_PresenceDisplay &();
    operator const H460P_ArrayOf_PresenceDisplay &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresenceGeoLocation
//

class H460P_PresenceGeoLocation : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceGeoLocation, PASN_Sequence);
#endif
  public:
    H460P_PresenceGeoLocation(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_locale,
      e_region,
      e_country,
      e_countryCode,
      e_latitude,
      e_longitude,
      e_elevation
    };

    PASN_IA5String m_locale;
    PASN_IA5String m_region;
    PASN_IA5String m_country;
    PASN_IA5String m_countryCode;
    PASN_IA5String m_latitude;
    PASN_IA5String m_longitude;
    PASN_IA5String m_elevation;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceMessage
//

class H460P_PresenceMessage;

class H460P_ArrayOf_PresenceMessage : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceMessage, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceMessage(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceMessage & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_AliasAddress
//

class H225_AliasAddress;

class H460P_ArrayOf_AliasAddress : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_AliasAddress, PASN_Array);
#endif
  public:
    H460P_ArrayOf_AliasAddress(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H225_AliasAddress & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceNotification
//

class H460P_PresenceNotification;

class H460P_ArrayOf_PresenceNotification : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceNotification, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceNotification(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceNotification & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceInstruction
//

class H460P_PresenceInstruction;

class H460P_ArrayOf_PresenceInstruction : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceInstruction, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceInstruction(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceInstruction & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceSubscription
//

class H460P_PresenceSubscription;

class H460P_ArrayOf_PresenceSubscription : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceSubscription, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceSubscription(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceSubscription & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceIdentifier
//

class H460P_PresenceIdentifier;

class H460P_ArrayOf_PresenceIdentifier : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceIdentifier, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceIdentifier(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceIdentifier & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceAlias
//

class H460P_PresenceAlias;

class H460P_ArrayOf_PresenceAlias : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceAlias, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceAlias(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceAlias & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_GenericData
//

class H225_GenericData;

class H460P_ArrayOf_GenericData : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_GenericData, PASN_Array);
#endif
  public:
    H460P_ArrayOf_GenericData(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H225_GenericData & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceDisplay
//

class H460P_PresenceDisplay;

class H460P_ArrayOf_PresenceDisplay : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceDisplay, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceDisplay(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceDisplay & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceFeature
//

class H460P_PresenceFeature;

class H460P_ArrayOf_PresenceFeature : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceFeature, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceFeature(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceFeature & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// PresenceElement
//

class H460P_PresenceElement : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceElement, PASN_Sequence);
#endif
  public:
    H460P_PresenceElement(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceMessage m_message;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceStatus
//

class H460P_PresenceStatus : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceStatus, PASN_Sequence);
#endif
  public:
    H460P_PresenceStatus(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_instruction
    };

    H460P_ArrayOf_AliasAddress m_alias;
    H460P_ArrayOf_PresenceNotification m_notification;
    H460P_ArrayOf_PresenceInstruction m_instruction;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceInstruct
//

class H460P_PresenceInstruct : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceInstruct, PASN_Sequence);
#endif
  public:
    H460P_PresenceInstruct(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H225_AliasAddress m_alias;
    H460P_ArrayOf_PresenceInstruction m_instruction;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAuthorize
//

class H460P_PresenceAuthorize : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAuthorize, PASN_Sequence);
#endif
  public:
    H460P_PresenceAuthorize(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H225_AliasAddress m_alias;
    H460P_ArrayOf_PresenceSubscription m_subscription;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceNotify
//

class H460P_PresenceNotify : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceNotify, PASN_Sequence);
#endif
  public:
    H460P_PresenceNotify(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H225_AliasAddress m_alias;
    H460P_ArrayOf_PresenceNotification m_notification;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceRequest
//

class H460P_PresenceRequest : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceRequest, PASN_Sequence);
#endif
  public:
    H460P_PresenceRequest(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceSubscription m_subscription;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceResponse
//

class H460P_PresenceResponse : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceResponse, PASN_Sequence);
#endif
  public:
    H460P_PresenceResponse(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceSubscription m_subscription;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAlive
//

class H460P_PresenceAlive : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAlive, PASN_Sequence);
#endif
  public:
    H460P_PresenceAlive(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceIdentifier m_identifier;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceRemove
//

class H460P_PresenceRemove : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceRemove, PASN_Sequence);
#endif
  public:
    H460P_PresenceRemove(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceIdentifier m_identifier;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAlert
//

class H460P_PresenceAlert : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAlert, PASN_Sequence);
#endif
  public:
    H460P_PresenceAlert(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceNotification m_notification;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceSubscription
//

class H460P_PresenceSubscription : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceSubscription, PASN_Sequence);
#endif
  public:
    H460P_PresenceSubscription(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_approved,
      e_rasAddress,
      e_timeToLive,
      e_genericData
    };

    H460P_PresenceIdentifier m_identifier;
    H225_AliasAddress m_subscribe;
    H460P_ArrayOf_PresenceAlias m_aliases;
    PASN_Boolean m_approved;
    H225_TransportAddress m_rasAddress;
    H225_TimeToLive m_timeToLive;
    H460P_ArrayOf_GenericData m_genericData;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// Presentity
//

class H460P_Presentity : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_Presentity, PASN_Sequence);
#endif
  public:
    H460P_Presentity(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_supportedFeatures,
      e_geolocation,
      e_display,
      e_genericData
    };

    H460P_PresenceState m_state;
    H460P_ArrayOf_PresenceFeature m_supportedFeatures;
    H460P_PresenceGeoLocation m_geolocation;
    H460P_ArrayOf_PresenceDisplay m_display;
    H460P_ArrayOf_GenericData m_genericData;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceNotification
//

class H460P_PresenceNotification : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceNotification, PASN_Sequence);
#endif
  public:
    H460P_PresenceNotification(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_aliasAddress,
      e_subscribers
    };

    H225_AliasAddress m_aliasAddress;
    H460P_ArrayOf_PresenceIdentifier m_subscribers;
    H460P_Presentity m_presentity;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


#endif // __H460P_H

#endif // if ! H323_DISABLE_H460P


// End of H460pres.h