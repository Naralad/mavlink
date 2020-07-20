// MESSAGE ODAR_FUSED_VEL support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_FUSED_VEL message
 *
 *  ODAR Fused Vel 
 */
struct ODAR_FUSED_VEL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 237;
    static constexpr size_t LENGTH = 32;
    static constexpr size_t MIN_LENGTH = 32;
    static constexpr uint8_t CRC_EXTRA = 34;
    static constexpr auto NAME = "ODAR_FUSED_VEL";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    float vx; /*<   */
    float vy; /*<   */
    float vz; /*<   */
    float wx; /*<   */
    float wy; /*<   */
    float wz; /*<   */


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
        ss << "  vx: " << vx << std::endl;
        ss << "  vy: " << vy << std::endl;
        ss << "  vz: " << vz << std::endl;
        ss << "  wx: " << wx << std::endl;
        ss << "  wy: " << wy << std::endl;
        ss << "  wz: " << wz << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << vx;                            // offset: 8
        map << vy;                            // offset: 12
        map << vz;                            // offset: 16
        map << wx;                            // offset: 20
        map << wy;                            // offset: 24
        map << wz;                            // offset: 28
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> vx;                            // offset: 8
        map >> vy;                            // offset: 12
        map >> vz;                            // offset: 16
        map >> wx;                            // offset: 20
        map >> wy;                            // offset: 24
        map >> wz;                            // offset: 28
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
