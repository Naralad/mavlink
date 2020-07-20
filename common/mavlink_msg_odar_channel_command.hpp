// MESSAGE ODAR_CHANNEL_COMMAND support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_CHANNEL_COMMAND message
 *
 *  ODAR Channel Command 
 */
struct ODAR_CHANNEL_COMMAND : mavlink::Message {
    static constexpr msgid_t MSG_ID = 224;
    static constexpr size_t LENGTH = 20;
    static constexpr size_t MIN_LENGTH = 20;
    static constexpr uint8_t CRC_EXTRA = 184;
    static constexpr auto NAME = "ODAR_CHANNEL_COMMAND";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    uint32_t channel; /*<   */
    float float_value; /*<   */
    int32_t int_value; /*<   */


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
        ss << "  channel: " << channel << std::endl;
        ss << "  float_value: " << float_value << std::endl;
        ss << "  int_value: " << int_value << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << channel;                       // offset: 8
        map << float_value;                   // offset: 12
        map << int_value;                     // offset: 16
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> channel;                       // offset: 8
        map >> float_value;                   // offset: 12
        map >> int_value;                     // offset: 16
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
