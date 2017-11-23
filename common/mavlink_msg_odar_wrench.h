#pragma once
// MESSAGE ODAR_WRENCH PACKING

#define MAVLINK_MSG_ID_ODAR_WRENCH 228

MAVPACKED(
typedef struct __mavlink_odar_wrench_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float Fx; /*<  Fx */
 float Fy; /*<  Fy */
 float Fz; /*<  Fz */
 float Tx; /*<  Tx */
 float Ty; /*<  Ty */
 float Tz; /*<  Tz */
}) mavlink_odar_wrench_t;

#define MAVLINK_MSG_ID_ODAR_WRENCH_LEN 32
#define MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN 32
#define MAVLINK_MSG_ID_228_LEN 32
#define MAVLINK_MSG_ID_228_MIN_LEN 32

#define MAVLINK_MSG_ID_ODAR_WRENCH_CRC 81
#define MAVLINK_MSG_ID_228_CRC 81



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ODAR_WRENCH { \
    228, \
    "ODAR_WRENCH", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_wrench_t, time_usec) }, \
         { "Fx", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_wrench_t, Fx) }, \
         { "Fy", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_wrench_t, Fy) }, \
         { "Fz", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_wrench_t, Fz) }, \
         { "Tx", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_wrench_t, Tx) }, \
         { "Ty", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_wrench_t, Ty) }, \
         { "Tz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_wrench_t, Tz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ODAR_WRENCH { \
    "ODAR_WRENCH", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_wrench_t, time_usec) }, \
         { "Fx", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_wrench_t, Fx) }, \
         { "Fy", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_wrench_t, Fy) }, \
         { "Fz", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_wrench_t, Fz) }, \
         { "Tx", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_wrench_t, Tx) }, \
         { "Ty", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_wrench_t, Ty) }, \
         { "Tz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_wrench_t, Tz) }, \
         } \
}
#endif

/**
 * @brief Pack a odar_wrench message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param Fx  Fx 
 * @param Fy  Fy 
 * @param Fz  Fz 
 * @param Tx  Tx 
 * @param Ty  Ty 
 * @param Tz  Tz 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_wrench_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float Fx, float Fy, float Fz, float Tx, float Ty, float Tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_WRENCH_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, Fx);
    _mav_put_float(buf, 12, Fy);
    _mav_put_float(buf, 16, Fz);
    _mav_put_float(buf, 20, Tx);
    _mav_put_float(buf, 24, Ty);
    _mav_put_float(buf, 28, Tz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_WRENCH_LEN);
#else
    mavlink_odar_wrench_t packet;
    packet.time_usec = time_usec;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.Tx = Tx;
    packet.Ty = Ty;
    packet.Tz = Tz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_WRENCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_WRENCH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
}

/**
 * @brief Pack a odar_wrench message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param Fx  Fx 
 * @param Fy  Fy 
 * @param Fz  Fz 
 * @param Tx  Tx 
 * @param Ty  Ty 
 * @param Tz  Tz 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_wrench_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float Fx,float Fy,float Fz,float Tx,float Ty,float Tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_WRENCH_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, Fx);
    _mav_put_float(buf, 12, Fy);
    _mav_put_float(buf, 16, Fz);
    _mav_put_float(buf, 20, Tx);
    _mav_put_float(buf, 24, Ty);
    _mav_put_float(buf, 28, Tz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_WRENCH_LEN);
#else
    mavlink_odar_wrench_t packet;
    packet.time_usec = time_usec;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.Tx = Tx;
    packet.Ty = Ty;
    packet.Tz = Tz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_WRENCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_WRENCH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
}

/**
 * @brief Encode a odar_wrench struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odar_wrench C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_wrench_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odar_wrench_t* odar_wrench)
{
    return mavlink_msg_odar_wrench_pack(system_id, component_id, msg, odar_wrench->time_usec, odar_wrench->Fx, odar_wrench->Fy, odar_wrench->Fz, odar_wrench->Tx, odar_wrench->Ty, odar_wrench->Tz);
}

/**
 * @brief Encode a odar_wrench struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odar_wrench C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_wrench_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odar_wrench_t* odar_wrench)
{
    return mavlink_msg_odar_wrench_pack_chan(system_id, component_id, chan, msg, odar_wrench->time_usec, odar_wrench->Fx, odar_wrench->Fy, odar_wrench->Fz, odar_wrench->Tx, odar_wrench->Ty, odar_wrench->Tz);
}

/**
 * @brief Send a odar_wrench message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param Fx  Fx 
 * @param Fy  Fy 
 * @param Fz  Fz 
 * @param Tx  Tx 
 * @param Ty  Ty 
 * @param Tz  Tz 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odar_wrench_send(mavlink_channel_t chan, uint64_t time_usec, float Fx, float Fy, float Fz, float Tx, float Ty, float Tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_WRENCH_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, Fx);
    _mav_put_float(buf, 12, Fy);
    _mav_put_float(buf, 16, Fz);
    _mav_put_float(buf, 20, Tx);
    _mav_put_float(buf, 24, Ty);
    _mav_put_float(buf, 28, Tz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_WRENCH, buf, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
#else
    mavlink_odar_wrench_t packet;
    packet.time_usec = time_usec;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.Tx = Tx;
    packet.Ty = Ty;
    packet.Tz = Tz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_WRENCH, (const char *)&packet, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
#endif
}

/**
 * @brief Send a odar_wrench message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_odar_wrench_send_struct(mavlink_channel_t chan, const mavlink_odar_wrench_t* odar_wrench)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_odar_wrench_send(chan, odar_wrench->time_usec, odar_wrench->Fx, odar_wrench->Fy, odar_wrench->Fz, odar_wrench->Tx, odar_wrench->Ty, odar_wrench->Tz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_WRENCH, (const char *)odar_wrench, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
#endif
}

#if MAVLINK_MSG_ID_ODAR_WRENCH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odar_wrench_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float Fx, float Fy, float Fz, float Tx, float Ty, float Tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, Fx);
    _mav_put_float(buf, 12, Fy);
    _mav_put_float(buf, 16, Fz);
    _mav_put_float(buf, 20, Tx);
    _mav_put_float(buf, 24, Ty);
    _mav_put_float(buf, 28, Tz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_WRENCH, buf, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
#else
    mavlink_odar_wrench_t *packet = (mavlink_odar_wrench_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->Fx = Fx;
    packet->Fy = Fy;
    packet->Fz = Fz;
    packet->Tx = Tx;
    packet->Ty = Ty;
    packet->Tz = Tz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_WRENCH, (const char *)packet, MAVLINK_MSG_ID_ODAR_WRENCH_MIN_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_LEN, MAVLINK_MSG_ID_ODAR_WRENCH_CRC);
#endif
}
#endif

#endif

// MESSAGE ODAR_WRENCH UNPACKING


/**
 * @brief Get field time_usec from odar_wrench message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_odar_wrench_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field Fx from odar_wrench message
 *
 * @return  Fx 
 */
static inline float mavlink_msg_odar_wrench_get_Fx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field Fy from odar_wrench message
 *
 * @return  Fy 
 */
static inline float mavlink_msg_odar_wrench_get_Fy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Fz from odar_wrench message
 *
 * @return  Fz 
 */
static inline float mavlink_msg_odar_wrench_get_Fz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Tx from odar_wrench message
 *
 * @return  Tx 
 */
static inline float mavlink_msg_odar_wrench_get_Tx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Ty from odar_wrench message
 *
 * @return  Ty 
 */
static inline float mavlink_msg_odar_wrench_get_Ty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Tz from odar_wrench message
 *
 * @return  Tz 
 */
static inline float mavlink_msg_odar_wrench_get_Tz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a odar_wrench message into a struct
 *
 * @param msg The message to decode
 * @param odar_wrench C-struct to decode the message contents into
 */
static inline void mavlink_msg_odar_wrench_decode(const mavlink_message_t* msg, mavlink_odar_wrench_t* odar_wrench)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    odar_wrench->time_usec = mavlink_msg_odar_wrench_get_time_usec(msg);
    odar_wrench->Fx = mavlink_msg_odar_wrench_get_Fx(msg);
    odar_wrench->Fy = mavlink_msg_odar_wrench_get_Fy(msg);
    odar_wrench->Fz = mavlink_msg_odar_wrench_get_Fz(msg);
    odar_wrench->Tx = mavlink_msg_odar_wrench_get_Tx(msg);
    odar_wrench->Ty = mavlink_msg_odar_wrench_get_Ty(msg);
    odar_wrench->Tz = mavlink_msg_odar_wrench_get_Tz(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ODAR_WRENCH_LEN? msg->len : MAVLINK_MSG_ID_ODAR_WRENCH_LEN;
        memset(odar_wrench, 0, MAVLINK_MSG_ID_ODAR_WRENCH_LEN);
    memcpy(odar_wrench, _MAV_PAYLOAD(msg), len);
#endif
}
