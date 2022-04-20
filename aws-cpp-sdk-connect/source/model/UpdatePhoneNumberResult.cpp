﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdatePhoneNumberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePhoneNumberResult::UpdatePhoneNumberResult()
{
}

UpdatePhoneNumberResult::UpdatePhoneNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePhoneNumberResult& UpdatePhoneNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

  }

  if(jsonValue.ValueExists("PhoneNumberArn"))
  {
    m_phoneNumberArn = jsonValue.GetString("PhoneNumberArn");

  }



  return *this;
}
