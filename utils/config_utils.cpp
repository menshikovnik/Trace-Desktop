//
// Created by Nick Menshikov on 25.08.2024.
//
#include "utils/config_utils.h"

#include <iostream>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <QtCore/QString>

boost::property_tree::ptree config::load_config(const std::string &filename)
{
    boost::property_tree::ptree root;
    try {
        read_ini(filename, root);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return root;
}

QString config::get_server_url(const std::string &filename)
{
    const boost::property_tree::ptree pt = load_config(filename);
    const auto server_url = pt.get<std::string>("Server.URL");
    return QString::fromStdString(server_url);
}

