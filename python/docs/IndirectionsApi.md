# openapi_client.IndirectionsApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**indirections_get_indirection**](IndirectionsApi.md#indirections_get_indirection) | **GET** /indirections/{uid} | Get single indirection
[**indirections_list_indirections**](IndirectionsApi.md#indirections_list_indirections) | **GET** /indirections | List all indirections
[**indirections_set_indirections**](IndirectionsApi.md#indirections_set_indirections) | **POST** /indirections/set | Update one or more indirections
[**indirections_set_indirections2**](IndirectionsApi.md#indirections_set_indirections2) | **PUT** /indirections | Update one or more indirections


# **indirections_get_indirection**
> IndirectionsGetIndirectionResponse indirections_get_indirection(uid)

Get single indirection

### Example


```python
import time
import openapi_client
from openapi_client.api import indirections_api
from openapi_client.model.indirections_get_indirection_response import IndirectionsGetIndirectionResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = indirections_api.IndirectionsApi(api_client)
    uid = "uid_example" # str | uid of indirection

    # example passing only required values which don't have defaults set
    try:
        # Get single indirection
        api_response = api_instance.indirections_get_indirection(uid)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling IndirectionsApi->indirections_get_indirection: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| uid of indirection |

### Return type

[**IndirectionsGetIndirectionResponse**](IndirectionsGetIndirectionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **indirections_list_indirections**
> IndirectionsListIndirectionsResponse indirections_list_indirections()

List all indirections

### Example


```python
import time
import openapi_client
from openapi_client.api import indirections_api
from openapi_client.model.indirections_list_indirections_response import IndirectionsListIndirectionsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = indirections_api.IndirectionsApi(api_client)
    resource_type = "resourceType_example" # str | type of resource. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # List all indirections
        api_response = api_instance.indirections_list_indirections(resource_type=resource_type)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling IndirectionsApi->indirections_list_indirections: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **resource_type** | **str**| type of resource. | [optional]

### Return type

[**IndirectionsListIndirectionsResponse**](IndirectionsListIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **indirections_set_indirections**
> IndirectionsSetIndirectionsResponse indirections_set_indirections(body)

Update one or more indirections

### Example


```python
import time
import openapi_client
from openapi_client.api import indirections_api
from openapi_client.model.indirections_set_indirections_response import IndirectionsSetIndirectionsResponse
from openapi_client.model.indirections_set_indirections_request import IndirectionsSetIndirectionsRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = indirections_api.IndirectionsApi(api_client)
    body = IndirectionsSetIndirectionsRequest(
        assignments=[
            SetIndirectionsRequestAssignment(
                uid="uid_example",
                resource_index=1,
                resource_uid="resource_uid_example",
            ),
        ],
    ) # IndirectionsSetIndirectionsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Update one or more indirections
        api_response = api_instance.indirections_set_indirections(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling IndirectionsApi->indirections_set_indirections: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IndirectionsSetIndirectionsRequest**](IndirectionsSetIndirectionsRequest.md)|  |

### Return type

[**IndirectionsSetIndirectionsResponse**](IndirectionsSetIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **indirections_set_indirections2**
> IndirectionsSetIndirectionsResponse indirections_set_indirections2(body)

Update one or more indirections

### Example


```python
import time
import openapi_client
from openapi_client.api import indirections_api
from openapi_client.model.indirections_set_indirections_response import IndirectionsSetIndirectionsResponse
from openapi_client.model.indirections_set_indirections_request import IndirectionsSetIndirectionsRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = indirections_api.IndirectionsApi(api_client)
    body = IndirectionsSetIndirectionsRequest(
        assignments=[
            SetIndirectionsRequestAssignment(
                uid="uid_example",
                resource_index=1,
                resource_uid="resource_uid_example",
            ),
        ],
    ) # IndirectionsSetIndirectionsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Update one or more indirections
        api_response = api_instance.indirections_set_indirections2(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling IndirectionsApi->indirections_set_indirections2: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IndirectionsSetIndirectionsRequest**](IndirectionsSetIndirectionsRequest.md)|  |

### Return type

[**IndirectionsSetIndirectionsResponse**](IndirectionsSetIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

