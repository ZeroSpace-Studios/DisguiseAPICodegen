# openapi_client.StatusApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**status_get_project**](StatusApi.md#status_get_project) | **GET** /status/project | Return the project information
[**status_get_session**](StatusApi.md#status_get_session) | **GET** /status/session | Return the session config
[**status_list_health**](StatusApi.md#status_list_health) | **GET** /status/health | List all health status for the machines in the network
[**status_list_notifications**](StatusApi.md#status_list_notifications) | **GET** /status/notifications | List all notifications for the machines in the network


# **status_get_project**
> StatusGetProjectResponse status_get_project()

Return the project information

### Example


```python
import time
import openapi_client
from openapi_client.api import status_api
from openapi_client.model.status_get_project_response import StatusGetProjectResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = status_api.StatusApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Return the project information
        api_response = api_instance.status_get_project()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling StatusApi->status_get_project: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**StatusGetProjectResponse**](StatusGetProjectResponse.md)

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

# **status_get_session**
> StatusGetSessionResponse status_get_session()

Return the session config

### Example


```python
import time
import openapi_client
from openapi_client.api import status_api
from openapi_client.model.status_get_session_response import StatusGetSessionResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = status_api.StatusApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Return the session config
        api_response = api_instance.status_get_session()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling StatusApi->status_get_session: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**StatusGetSessionResponse**](StatusGetSessionResponse.md)

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

# **status_list_health**
> StatusListHealthResponse status_list_health()

List all health status for the machines in the network

### Example


```python
import time
import openapi_client
from openapi_client.api import status_api
from openapi_client.model.status_list_health_response import StatusListHealthResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = status_api.StatusApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all health status for the machines in the network
        api_response = api_instance.status_list_health()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling StatusApi->status_list_health: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**StatusListHealthResponse**](StatusListHealthResponse.md)

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

# **status_list_notifications**
> StatusListNotificationsResponse status_list_notifications()

List all notifications for the machines in the network

### Example


```python
import time
import openapi_client
from openapi_client.api import status_api
from openapi_client.model.status_list_notifications_response import StatusListNotificationsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = status_api.StatusApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all notifications for the machines in the network
        api_response = api_instance.status_list_notifications()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling StatusApi->status_list_notifications: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**StatusListNotificationsResponse**](StatusListNotificationsResponse.md)

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

