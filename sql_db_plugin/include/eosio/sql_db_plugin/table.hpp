#pragma once

#include <memory>
#include <soci/soci.h>
#include<soci/mysql/soci-mysql.h>

#include <fc/io/json.hpp>
#include <fc/variant.hpp>
#include <fc/time.hpp>

#include <eosio/sql_db_plugin/sql_db_plugin.hpp>

namespace eosio{

class mysql_table{
    public:

        void reconnect(std::shared_ptr<soci::session> m_session){
            m_session->reconnect();
        }

        fc::microseconds max_serialization_time = fc::microseconds(150*1000);

};

}