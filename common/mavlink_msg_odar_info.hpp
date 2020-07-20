// MESSAGE ODAR_INFO support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_INFO message
 *
 *  ODAR Status Info 
 */
struct ODAR_INFO : mavlink::Message {
    static constexpr msgid_t MSG_ID = 238;
    static constexpr size_t LENGTH = 38;
    static constexpr size_t MIN_LENGTH = 38;
    static constexpr uint8_t CRC_EXTRA = 60;
    static constexpr auto NAME = "ODAR_INFO";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    float gain_scale; /*<   */
    uint8_t fuse_flag; /*<   */
    uint8_t feedback_flag; /*<   */
    float k_p; /*<   */
    float k_d; /*<   */
    float k_i; /*<   */
    float k_r; /*<   */
    float k_w; /*<   */
    float k_ri; /*<   */


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
        ss << "  gain_scale: " << gain_scale << std::endl;
        ss << "  fuse_flag: " << +fuse_flag << std::endl;
        ss << "  feedback_flag: " << +feedback_flag << std::endl;
        ss << "  k_p: " << k_p << std::endl;
        ss << "  k_d: " << k_d << std::endl;
        ss << "  k_i: " << k_i << std::endl;
        ss << "  k_r: " << k_r << std::endl;
        ss << "  k_w: " << k_w << std::endl;
        ss << "  k_ri: " << k_ri << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << gain_scale;                    // offset: 8
        map << k_p;                           // offset: 12
        map << k_d;                           // offset: 16
        map << k_i;                           // offset: 20
        map << k_r;                           // offset: 24
        map << k_w;                           // offset: 28
        map << k_ri;                          // offset: 32
        map << fuse_flag;                     // offset: 36
        map << feedback_flag;                 // offset: 37
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> gain_scale;                    // offset: 8
        map >> k_p;                           // offset: 12
        map >> k_d;                           // offset: 16
        map >> k_i;                           // offset: 20
        map >> k_r;                           // offset: 24
        map >> k_w;                           // offset: 28
        map >> k_ri;                          // offset: 32
        map >> fuse_flag;                     // offset: 36
        map >> feedback_flag;                 // offset: 37
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
