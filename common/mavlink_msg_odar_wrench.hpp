// MESSAGE ODAR_WRENCH support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_WRENCH message
 *
 *  ODAR Wrench 
 */
struct ODAR_WRENCH : mavlink::Message {
    static constexpr msgid_t MSG_ID = 228;
    static constexpr size_t LENGTH = 32;
    static constexpr size_t MIN_LENGTH = 32;
    static constexpr uint8_t CRC_EXTRA = 81;
    static constexpr auto NAME = "ODAR_WRENCH";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    float Fx; /*<  Fx  */
    float Fy; /*<  Fy  */
    float Fz; /*<  Fz  */
    float Tx; /*<  Tx  */
    float Ty; /*<  Ty  */
    float Tz; /*<  Tz  */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  time_usec: " << time_usec << std::endl;
        ss << "  Fx: " << Fx << std::endl;
        ss << "  Fy: " << Fy << std::endl;
        ss << "  Fz: " << Fz << std::endl;
        ss << "  Tx: " << Tx << std::endl;
        ss << "  Ty: " << Ty << std::endl;
        ss << "  Tz: " << Tz << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << Fx;                            // offset: 8
        map << Fy;                            // offset: 12
        map << Fz;                            // offset: 16
        map << Tx;                            // offset: 20
        map << Ty;                            // offset: 24
        map << Tz;                            // offset: 28
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> Fx;                            // offset: 8
        map >> Fy;                            // offset: 12
        map >> Fz;                            // offset: 16
        map >> Tx;                            // offset: 20
        map >> Ty;                            // offset: 24
        map >> Tz;                            // offset: 28
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
