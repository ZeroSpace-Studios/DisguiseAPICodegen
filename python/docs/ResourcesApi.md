# openapi_client.ResourcesApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**resources_get_resource**](ResourcesApi.md#resources_get_resource) | **GET** /resources/{uid} | Get single resource
[**resources_list_resources**](ResourcesApi.md#resources_list_resources) | **GET** /resources | List resources by type


# **resources_get_resource**
> ResourcesGetResourceResponse resources_get_resource(uid)

Get single resource

### Example


```python
import time
import openapi_client
from openapi_client.api import resources_api
from openapi_client.model.resources_get_resource_response import ResourcesGetResourceResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = resources_api.ResourcesApi(api_client)
    uid = "uid_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Get single resource
        api_response = api_instance.resources_get_resource(uid)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ResourcesApi->resources_get_resource: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  |

### Return type

[**ResourcesGetResourceResponse**](ResourcesGetResourceResponse.md)

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

# **resources_list_resources**
> ResourcesListResourcesResponse resources_list_resources()

List resources by type

### Example


```python
import time
import openapi_client
from openapi_client.api import resources_api
from openapi_client.model.resources_list_resources_response import ResourcesListResourcesResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = resources_api.ResourcesApi(api_client)
    type = "type_example" # str | resource type name. (optional)
    search = "search_example" # str | search substring to look for in the resource name. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # List resources by type
        api_response = api_instance.resources_list_resources(type=type, search=search)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ResourcesApi->resources_list_resources: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **str**| resource type name. | [optional]
 **search** | **str**| search substring to look for in the resource name. | [optional]

### Return type

[**ResourcesListResourcesResponse**](ResourcesListResourcesResponse.md)

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

