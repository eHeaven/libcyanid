#ifndef _cyanid_raw_packet_hpp_
#define _cyanid_raw_packet_hpp_

#include "device.hpp"
#include <pcap.h>
#include <memory>

namespace cyanid {

class raw_packet {
public:
    typedef u_char data;
    typedef pcap_pkthdr header;

    raw_packet(const header* h, const data* d) : pkt_header(h), pkt_data(d) { }
    const data* payload() const { return pkt_data; }
    const header* packet_header() const { return pkt_header; }

private:
    const header* pkt_header;
    const data* pkt_data;
};

} // namespace cyanid

#endif
