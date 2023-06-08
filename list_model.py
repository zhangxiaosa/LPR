import os
import openai
import json

openai.api_key = os.getenv("OPENAI_API_KEY")
a = openai.Model.list()

# 将变量 `a` 存储为 JSON 文件
with open('data.json', 'w') as json_file:
    json.dump(a, json_file)

