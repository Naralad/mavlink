#pragma once
// MESSAGE ODAR_PWM PACKING

#define MAVLINK_MSG_ID_ODAR_PWM 227

MAVPACKED(
typedef struct __mavlink_odar_pwm_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 uint16_t pwm1; /*<  */
 uint16_t pwm2; /*<  */
 uint16_t pwm3; /*<  */
 uint16_t pwm4; /*<  */
 uint16_t pwm5; /*<  */
 uint16_t pwm6; /*<  */
 uint16_t pwm7; /*<  */
 uint16_t pwm8; /*<  */
}) mavlink_odar_pwm_t;

#define MAVLINK_MSG_ID_ODAR_PWM_LEN 24
#define MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN 24
#define MAVLINK_MSG_ID_227_LEN 24
#define MAVLINK_MSG_ID_227_MIN_LEN 24

#define MAVLINK_MSG_ID_ODAR_PWM_CRC 229
#define MAVLINK_MSG_ID_227_CRC 229



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ODAR_PWM { \
    227, \
    "ODAR_PWM", \
    9, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_pwm_t, time_usec) }, \
         { "pwm1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_odar_pwm_t, pwm1) }, \
         { "pwm2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_odar_pwm_t, pwm2) }, \
         { "pwm3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_odar_pwm_t, pwm3) }, \
         { "pwm4", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_odar_pwm_t, pwm4) }, \
         { "pwm5", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_odar_pwm_t, pwm5) }, \
         { "pwm6", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_odar_pwm_t, pwm6) }, \
         { "pwm7", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_odar_pwm_t, pwm7) }, \
         { "pwm8", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_odar_pwm_t, pwm8) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ODAR_PWM { \
    "ODAR_PWM", \
    9, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_pwm_t, time_usec) }, \
         { "pwm1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_odar_pwm_t, pwm1) }, \
         { "pwm2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_odar_pwm_t, pwm2) }, \
         { "pwm3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_odar_pwm_t, pwm3) }, \
         { "pwm4", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_odar_pwm_t, pwm4) }, \
         { "pwm5", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_odar_pwm_t, pwm5) }, \
         { "pwm6", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_odar_pwm_t, pwm6) }, \
         { "pwm7", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_odar_pwm_t, pwm7) }, \
         { "pwm8", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_odar_pwm_t, pwm8) }, \
         } \
}
#endif

/**
 * @brief Pack a odar_pwm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param pwm1  
 * @param pwm2  
 * @param pwm3  
 * @param pwm4  
 * @param pwm5  
 * @param pwm6  
 * @param pwm7  
 * @param pwm8  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_pwm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t pwm1, uint16_t pwm2, uint16_t pwm3, uint16_t pwm4, uint16_t pwm5, uint16_t pwm6, uint16_t pwm7, uint16_t pwm8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_PWM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, pwm1);
    _mav_put_uint16_t(buf, 10, pwm2);
    _mav_put_uint16_t(buf, 12, pwm3);
    _mav_put_uint16_t(buf, 14, pwm4);
    _mav_put_uint16_t(buf, 16, pwm5);
    _mav_put_uint16_t(buf, 18, pwm6);
    _mav_put_uint16_t(buf, 20, pwm7);
    _mav_put_uint16_t(buf, 22, pwm8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_PWM_LEN);
#else
    mavlink_odar_pwm_t packet;
    packet.time_usec = time_usec;
    packet.pwm1 = pwm1;
    packet.pwm2 = pwm2;
    packet.pwm3 = pwm3;
    packet.pwm4 = pwm4;
    packet.pwm5 = pwm5;
    packet.pwm6 = pwm6;
    packet.pwm7 = pwm7;
    packet.pwm8 = pwm8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_PWM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_PWM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
}

/**
 * @brief Pack a odar_pwm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param pwm1  
 * @param pwm2  
 * @param pwm3  
 * @param pwm4  
 * @param pwm5  
 * @param pwm6  
 * @param pwm7  
 * @param pwm8  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_pwm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint16_t pwm1,uint16_t pwm2,uint16_t pwm3,uint16_t pwm4,uint16_t pwm5,uint16_t pwm6,uint16_t pwm7,uint16_t pwm8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_PWM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, pwm1);
    _mav_put_uint16_t(buf, 10, pwm2);
    _mav_put_uint16_t(buf, 12, pwm3);
    _mav_put_uint16_t(buf, 14, pwm4);
    _mav_put_uint16_t(buf, 16, pwm5);
    _mav_put_uint16_t(buf, 18, pwm6);
    _mav_put_uint16_t(buf, 20, pwm7);
    _mav_put_uint16_t(buf, 22, pwm8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_PWM_LEN);
#else
    mavlink_odar_pwm_t packet;
    packet.time_usec = time_usec;
    packet.pwm1 = pwm1;
    packet.pwm2 = pwm2;
    packet.pwm3 = pwm3;
    packet.pwm4 = pwm4;
    packet.pwm5 = pwm5;
    packet.pwm6 = pwm6;
    packet.pwm7 = pwm7;
    packet.pwm8 = pwm8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_PWM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_PWM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
}

/**
 * @brief Encode a odar_pwm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odar_pwm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_pwm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odar_pwm_t* odar_pwm)
{
    return mavlink_msg_odar_pwm_pack(system_id, component_id, msg, odar_pwm->time_usec, odar_pwm->pwm1, odar_pwm->pwm2, odar_pwm->pwm3, odar_pwm->pwm4, odar_pwm->pwm5, odar_pwm->pwm6, odar_pwm->pwm7, odar_pwm->pwm8);
}

/**
 * @brief Encode a odar_pwm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odar_pwm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_pwm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odar_pwm_t* odar_pwm)
{
    return mavlink_msg_odar_pwm_pack_chan(system_id, component_id, chan, msg, odar_pwm->time_usec, odar_pwm->pwm1, odar_pwm->pwm2, odar_pwm->pwm3, odar_pwm->pwm4, odar_pwm->pwm5, odar_pwm->pwm6, odar_pwm->pwm7, odar_pwm->pwm8);
}

/**
 * @brief Send a odar_pwm message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param pwm1  
 * @param pwm2  
 * @param pwm3  
 * @param pwm4  
 * @param pwm5  
 * @param pwm6  
 * @param pwm7  
 * @param pwm8  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odar_pwm_send(mavlink_channel_t chan, uint64_t time_usec, uint16_t pwm1, uint16_t pwm2, uint16_t pwm3, uint16_t pwm4, uint16_t pwm5, uint16_t pwm6, uint16_t pwm7, uint16_t pwm8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_PWM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, pwm1);
    _mav_put_uint16_t(buf, 10, pwm2);
    _mav_put_uint16_t(buf, 12, pwm3);
    _mav_put_uint16_t(buf, 14, pwm4);
    _mav_put_uint16_t(buf, 16, pwm5);
    _mav_put_uint16_t(buf, 18, pwm6);
    _mav_put_uint16_t(buf, 20, pwm7);
    _mav_put_uint16_t(buf, 22, pwm8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_PWM, buf, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
#else
    mavlink_odar_pwm_t packet;
    packet.time_usec = time_usec;
    packet.pwm1 = pwm1;
    packet.pwm2 = pwm2;
    packet.pwm3 = pwm3;
    packet.pwm4 = pwm4;
    packet.pwm5 = pwm5;
    packet.pwm6 = pwm6;
    packet.pwm7 = pwm7;
    packet.pwm8 = pwm8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_PWM, (const char *)&packet, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
#endif
}

/**
 * @brief Send a odar_pwm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_odar_pwm_send_struct(mavlink_channel_t chan, const mavlink_odar_pwm_t* odar_pwm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_odar_pwm_send(chan, odar_pwm->time_usec, odar_pwm->pwm1, odar_pwm->pwm2, odar_pwm->pwm3, odar_pwm->pwm4, odar_pwm->pwm5, odar_pwm->pwm6, odar_pwm->pwm7, odar_pwm->pwm8);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_PWM, (const char *)odar_pwm, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
#endif
}

#if MAVLINK_MSG_ID_ODAR_PWM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odar_pwm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint16_t pwm1, uint16_t pwm2, uint16_t pwm3, uint16_t pwm4, uint16_t pwm5, uint16_t pwm6, uint16_t pwm7, uint16_t pwm8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, pwm1);
    _mav_put_uint16_t(buf, 10, pwm2);
    _mav_put_uint16_t(buf, 12, pwm3);
    _mav_put_uint16_t(buf, 14, pwm4);
    _mav_put_uint16_t(buf, 16, pwm5);
    _mav_put_uint16_t(buf, 18, pwm6);
    _mav_put_uint16_t(buf, 20, pwm7);
    _mav_put_uint16_t(buf, 22, pwm8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_PWM, buf, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
#else
    mavlink_odar_pwm_t *packet = (mavlink_odar_pwm_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->pwm1 = pwm1;
    packet->pwm2 = pwm2;
    packet->pwm3 = pwm3;
    packet->pwm4 = pwm4;
    packet->pwm5 = pwm5;
    packet->pwm6 = pwm6;
    packet->pwm7 = pwm7;
    packet->pwm8 = pwm8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_PWM, (const char *)packet, MAVLINK_MSG_ID_ODAR_PWM_MIN_LEN, MAVLINK_MSG_ID_ODAR_PWM_LEN, MAVLINK_MSG_ID_ODAR_PWM_CRC);
#endif
}
#endif

#endif

// MESSAGE ODAR_PWM UNPACKING


/**
 * @brief Get field time_usec from odar_pwm message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_odar_pwm_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field pwm1 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field pwm2 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field pwm3 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field pwm4 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field pwm5 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field pwm6 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field pwm7 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field pwm8 from odar_pwm message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_odar_pwm_get_pwm8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Decode a odar_pwm message into a struct
 *
 * @param msg The message to decode
 * @param odar_pwm C-struct to decode the message contents into
 */
static inline void mavlink_msg_odar_pwm_decode(const mavlink_message_t* msg, mavlink_odar_pwm_t* odar_pwm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    odar_pwm->time_usec = mavlink_msg_odar_pwm_get_time_usec(msg);
    odar_pwm->pwm1 = mavlink_msg_odar_pwm_get_pwm1(msg);
    odar_pwm->pwm2 = mavlink_msg_odar_pwm_get_pwm2(msg);
    odar_pwm->pwm3 = mavlink_msg_odar_pwm_get_pwm3(msg);
    odar_pwm->pwm4 = mavlink_msg_odar_pwm_get_pwm4(msg);
    odar_pwm->pwm5 = mavlink_msg_odar_pwm_get_pwm5(msg);
    odar_pwm->pwm6 = mavlink_msg_odar_pwm_get_pwm6(msg);
    odar_pwm->pwm7 = mavlink_msg_odar_pwm_get_pwm7(msg);
    odar_pwm->pwm8 = mavlink_msg_odar_pwm_get_pwm8(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ODAR_PWM_LEN? msg->len : MAVLINK_MSG_ID_ODAR_PWM_LEN;
        memset(odar_pwm, 0, MAVLINK_MSG_ID_ODAR_PWM_LEN);
    memcpy(odar_pwm, _MAV_PAYLOAD(msg), len);
#endif
}
