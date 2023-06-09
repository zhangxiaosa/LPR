import os
import openai
import json
import time

openai.api_key = os.getenv("OPENAI_API_KEY")

start_time = time.time()
with open("example.c", "r") as f:
    program = f.read()


completion = openai.ChatCompletion.create(
    model="gpt-3.5-turbo-0301",
    messages=[
        {"role": "system", "content": "You are a helpful assistant."},
        {"role": "user", "content": "Given the following program, please inline the functions as much as possible. you can only give the final program. %s" % program}
    ]
)

res = completion.choices[0].message


with open("result.c", "w") as f:
    f.write(res.content)

end_time = time.time()
print(f"time: {end_time - start_time}")