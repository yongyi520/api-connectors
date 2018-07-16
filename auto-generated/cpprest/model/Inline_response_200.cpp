/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Inline_response_200.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Inline_response_200::Inline_response_200()
{
    m_Success = false;
    m_SuccessIsSet = false;
}

Inline_response_200::~Inline_response_200()
{
}

void Inline_response_200::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_200::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(m_Success);
    }

    return val;
}

void Inline_response_200::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("success")))
    {
        setSuccess(ModelBase::boolFromJson(val[utility::conversions::to_string_t("success")]));
    }
}

void Inline_response_200::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("success"), m_Success));
    }
}

void Inline_response_200::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("success")))
    {
        setSuccess(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("success"))));
    }
}

bool Inline_response_200::isSuccess() const
{
    return m_Success;
}


void Inline_response_200::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}
bool Inline_response_200::successIsSet() const
{
    return m_SuccessIsSet;
}

void Inline_response_200::unsetSuccess()
{
    m_SuccessIsSet = false;
}

}
}
}
}
